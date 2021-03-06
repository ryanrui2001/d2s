;
;Warden Stuff
;

D2Warden_ThreadHandle dd 0
D2Warden_ThreadReturnVal dd 0
D2Warden_StartAddress dd 0
aD2Warden db 'd2warden.dll',0
D2Warden_Handler dd 0

InitWardenThread proc
	pushad
	
	mov eax,EnableWarden
	test eax,eax
	jz over
	
	push offset aD2Warden	; d2warden.dll
	mov eax,LoadLibraryA
	mov eax,[eax]
	call eax	; LoadLibraryA
	mov D2Warden_Handler,eax
	test eax,eax
	jz over
	;push offset aD2Warden_0X68Handler
	;push D2Warden_Handler
	;mov eax,GetProcAddr
	;mov eax,[eax]
	;call eax ; GetProcAddr
	;mov D2Warden_0X68Handler,eax
	popad
	retn
over:
	mov EnableWarden, 0
	popad
	retn
InitWardenThread endp

; Client Logon into game
MyPacket0X68Handler proc 
	xor			eax,eax
	mov     ax, [edx+5]
	cmp     ax, 1
	jb      loc_68003AD5
	cmp     ax, 400h
	ja      loc_68003AD5
	
	push		eax
	movzx		eax,byte ptr[edx+7]
	cmp			eax,5
	jz			check_asn_dru
	cmp			eax,6
	jz			check_asn_dru
	pop			eax
	jmp			check_over
check_asn_dru:
	pop			eax

check_dru:
	; 检查D2C是否是DRU或者ASN角色
	pushad
	push		eax
	call		GetGameInfo
	add			esp,4
	test		eax,eax
	jz			fail_get_game
	mov			eax,[eax+4]
	test		eax,eax
	jz			fail_get_game
	mov			eax,[eax+ExtendGameInfoStruct.LoD_Game]
	test		eax,eax
	jnz			LOD_Game
	; DRU or ASN in D2C, invalid!
	popad
	jmp			loc_68003AD5
LOD_Game:
	popad
	jmp			check_over
fail_get_game:	
	popad

check_over:
	retn 4
loc_68003AD5:
	mov     eax, 3
	retn 4
MyPacket0X68Handler	endp

MyPacket0X68Handler_Post proc 
	;eax=ptClient
	;ecx=ptPacket
	;push		eax
	;mov			eax,EnableWarden
	;test		eax,eax
	;jnz			SendInfoToWarden
	;pop			eax
	ret
SendInfoToWarden:
	;pop eax	; restore the return val
	pushad
	; ecx=ClientID
	; edx=ptPacket
	;call D2Warden_0X68Handler
	popad
	xor     eax, eax
	ret
fail_over:
	pop edx
	pop ecx
	popad
loc_68003AD5:
	mov     eax, 3
	ret
MyPacket0X68Handler_Post	endp

