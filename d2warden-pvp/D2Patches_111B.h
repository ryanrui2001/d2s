/* ==========================================================
* d2warden
* https://github.com/lolet/d2warden
* ==========================================================
* Copyright 2011-2014 Bartosz Jankowski
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
* ========================================================== */

#ifndef D2PATCHES_H__
#define D2PATCHES_H__

// -- Warden checks end

#define D2GAME_CLIENT_PACKET_WRAPPER_NEW 0x703B5

#define D2GAME_MONSTERSPAWN_I 0x6F551 // mby crash

#define D2GAME_LASTHITINTERCEPT	0x7D66D
#define D2GAME_ONDAMAGECREATION	0x99130
#define D2NET_CLIENT_PACKET_WRAPPER	0x62AD
#define D2GAME_D2EX_CONNECT	0x2C1E0
#define D2GAME_ACT_LOAD	0x617B5
#define D2GAME_MOVE_PLAYER_CORPSE_TO_TOWN	0x42DAB
#define D2GAME_HOSTILE_WP_DELAY	0xF2F67
#define D2GAME_HOSTILE_BUTTON_DELAY	0xF2F2D
#define D2GAME_GOLD_DROP_ON_DEATH	0x7F560
#define D2GAME_EAR_DROP_ON_DEATH	0xD26C3
#define D2GAME_FINDUNIT_FIX	0xBEF80
#define D2GAME_PLAYER_MODE_INTERCEPT	0x41972
#define D2GAME_STRDEX_BUG_FIX	0x2D34F
#define D2GAME_CHAT_WRAPPER	0x2E670
#define D2GAME_NPC_SLOW_MISSILE_HEAL	0x90171
#define D2GAME_RESSURECT_FIX	0x32048
#define D2GAME_ROSTER_WRAPPER	0x43067
#define D2GAME_ON_MONSTER_DEATH	0x7E326
#define D2GAME_NULL_ORIGINAL_SC_0X66	0x89680
#define D2GAME_GAME_DESTROY_WRAPPER	0xE7A1A
#define D2GAME_ADD_CLIENTTOGAME_WRAPPER	0xC6A32
#define D2GAME_PLAYER_EVENTS_WRAPPER	0x2DC90
#define D2GAME_0X66_WARDEN_PACKET_WRAPPER	0x2BE20
#define D2GAME_0X05_WRAPPER	0x2F230
#define D2GAME_0X0C_WRAPPER	0x2F1B0
#define D2GAME_0X08_WRAPPER	0x2F580
#define D2GAME_0X0F_WRAPPER	0x2F420
#define D2GAME_0X06_WRAPPER	0x2F660
#define D2GAME_0X07_WRAPPER	0x2F5E0
#define D2GAME_0X09_WRAPPER	0x2F910
#define D2GAME_0X0A_WRAPPER	0x2F8B0
#define D2GAME_0X0D_WRAPPER	0x2F500
#define D2GAME_0X0E_WRAPPER	0x2F480
#define D2GAME_0X10_WRAPPER	0x2F850
#define D2GAME_0X11_WRAPPER	0x2F7F0
#define D2GAME_0X41_WRAPPER 0x31F60
#define D2GAME_0X03_WRAPPER	0x2EEE0
#define D2GAME_LOCK_HACK_WRAPPER	0xE6F00
#define D2GAME_PERM_STORE_STUB_I	0x909EF
#define D2GAME_PERM_STORE_STUB_II	0x928FC
#define D2GAME_ITEM_COST_STUB	0x913CA
#define D2CLIENT_EXTEND_GAME_STRUCT	0x2589
#define D2COMMON_EXTEND_PLAYERDATA_STRUCT_I	0x5BFC9
#define D2COMMON_EXTEND_PLAYERDATA_STRUCT_II	0x5BFDA
#define D2GAME_PARTY_SHARE_FIX_PREPARE	0x7E248
#define D2GAME_PARTY_SHARE_FIX	0x7E24A
#define D2GAME_EXP_INCREASE_FIX	0xBD5B7
#define D2GAME_EXP_INCREASE_FIX_2	0xBD310
#define D2GAME_MAX_PLAYERS_CHANGE	0x7EBF0
#define D2GAME_DECRESAE_CORPSE_NUMBER	0x424E6
#define D2GAME_NULL_IRON_MAIDEN	0xFBF5C + 8
#define D2GAME_NULL_LOWER_RESIST	0xFBF5C + 20
#define D2GAME_COWS_DROP_FIX	0xD156A
#define D2GAME_COW_LEVEL_QUEST_OVERRIDE	0x368C2
#define D2GAME_RESPEC	0x4BC83
#define D2GAME_FIRE_ENCHANTED_FIX	0xEBD50
#define D2COMMON_COLOUR_ITEM_INTERCEPT_IV	0x41B6D
#define D2COMMON_COLOUR_ITEM_INTERCEPT_V	0x418DC
#define D2GAME_TRESURE_CLASS_CREATE_HNDLR	0xD159B
#define FOG_MEM_ALLOC_OVERRIDE	0x1D380
#define FOG_MEM_FREE_OVERRIDE	0x1CEE0
#define FOG_MEM_REALLOC_OVERRIDE	0x1DBF0
#define D2GAME_NODESEX_AI_TEMP_FIX	0x2341D
#define D2GAME_NODESEX_BAAL_AI	0x2A790
#define D2GAME_NODESEX_DIABLO_AI	0x80AA0
#define D2GAME_NODESEX_ALLOC_16PLAYERS_NODES	0xEDF00
#define D2GAME_NODESEX_FREE_16PLAYERS_NODES	0xEDD70
#define D2GAME_NODESEX_FREE_CHILD_OF_16PLAYERS_NODES	0xEDC90
#define D2GAME_NODESEX_GET_UNIT_NODE	0xEDC50
#define D2GAME_NODESEX_SET_UNIT_NODE_AS_PARENT_MONSTERS	0xEDDE0
#define D2GAME_NODESEX_SET_UNIT_NODE_AS_PARENT_PLAYERS	0xEDE70
#define D2GAME_NODESEX_FREE_ALL_NODES	0xEDFC0
#define D2GAME_NODESEX_CHANGE_NODE_OFFSET_I	0xC2BCB
#define D2GAME_NODESEX_CHANGE_NODE_OFFSET_II	0xC2BD1
#define D2GAME_NODESEX_CHANGE_NODE_OFFSET_III	0xD2E05
#define D2GAME_GAMEENTER_CHECK_NUMBER_OF_PLAYERS	0x70285
#define D2GAME_GAMEENTER_CHECK_NUMBER_OF_PLAYERS_II	0xC5273
#define D2GAME_NODESEX_FIX_TREASURE_CLASS_DROP	0xD20AB
#define D2GAME_NODESEX_FIX_TREASURE_CLASS_DROP_II	0xD20B1
#define D2GAME_NODESEX_CREATE_UNITANY_CHANGE_NEUTRAL_NODE	0xC0B05
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPLAYER_I_F1	0x266B4
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPLAYER_II_F2	0x26F19
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPLAYER_III_F3	0x2936F
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPLAYER_IV_F4	0x29B69
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATECORPSE_I	0x425DD
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_PLAYER_EVENT_CONTROLLER	0x8327B
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_I	0x13FD3
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_II	0x14193
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_III_F2	0x143F3
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_IV_F3	0x1482B
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_V_F3	0x14A9B
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_VI_F4_HUGE_ONE	0x14E44
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_VII_F4_HUGE_ONE	0x150E3
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_VIII_F5_SMALL_ONE	0x1531C
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_IX_F6	0x1571F
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_X_MOVED_ONE_F6	0x15AAF
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XI_F7	0x15E37
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XII_F8	0x160F0
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XIII_F9	0x163E8
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XIV_F10	0x16592
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XV_F11	0x168A6
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XVI_F12	0x16A38
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XVII_F13	0x1741A
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPORTAL_I	0x31A7B
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XVIII_F14	0x539B7
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XIX_F15	0x54443
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XX_F16	0x548D2
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXI_F17	0xA806F
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXII_F17	0xA81DF
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXIII_F18	0xAF348
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXIV_F19	0xB03BF
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXV_F20	0xBA802
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXVI_F20	0xBA94D
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXVII_F21	0xBABF8
#define D2GAME_NODESEX_CHANGE_PLAYERS_NODES_FROM_8	0x22C78
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE	0x22C9C
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEMONSTER_I_F1	0x94056
#define D2GAME_NODESEX_REMOVEMONSTERCORPSE_CHANGE_ITERATION_TO_16	0x23D0A
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_MONSTERS_SKILL_NECRO	0xCC7DB
#define D2GAME_NODESEX_CHANGE_MONSTER_NODE_TO_17_SAME_FUNC_AS_ABOVE	0xCC836
#define D2GAME_NODESEX_CHANGE_OFFSET_TO_NEWNODES17_SAME_FUNC_AS_ABOVE_I	0xCC7EE
#define D2GAME_NODESEX_CHANGE_OFFSET_TO_NEWNODES17_SAME_FUNC_AS_ABOVE_II	0xCC824
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_MONSTERS	0x834D1
#define D2GAME_NODESEX_CHANGE_ITERATION_TO_16_SAME_FUNC_AS_ABOVE	0x8353C
#define D2GAME_NODESEX_CHANGE_OFFSET_TO_NEWNODES16_SAME_FUNC_AS_ABOVE_I	0x834F4
#define D2GAME_NODESEX_CHANGE_OFFSET_TO_NEWNODES16_SAME_FUNC_AS_ABOVE_II	0x8352A
#define D2GAME_NODESEX_CHANGE_ITERATION_TO_16	0xC2D8A
#define D2GAME_NODESEX_CHANGE_MONSTER_NODE_TO_16	0x23417
#define D2GAME_NODESEX_CHANGE_MONSTER_NODE_TO_17	0x2342E
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_IB	0x8E714

#endif