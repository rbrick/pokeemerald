#ifndef GUARD_PARTY_MENU_H
#define GUARD_PARTY_MENU_H

#include "task.h"

enum
{
    AILMENT_NONE,
    AILMENT_PSN,
    AILMENT_PRZ,
    AILMENT_SLP,
    AILMENT_FRZ,
    AILMENT_BRN
};

enum
{
    PARTY_CHOOSE_MON,
    PARTY_MUST_CHOOSE_MON,
    PARTY_CANT_SWITCH,
    PARTY_USE_ITEM_ON,
    PARTY_ABILITY_PREVENTS,
    PARTY_GIVE_ITEM,
};

struct Struct203CEC8
{
    u8 filler[0x9];
    s8 unk9;
    s8 unkA;
    u8 unkB;
    u8 filler2[0x2];
};

extern struct Struct203CEC8 gUnknown_0203CEC8;

extern const u16 gUnknown_0861500C[];

bool8 pokemon_has_move(struct Pokemon *, u16);
void sub_81B58A8(void);
void DoWallyTutorialBagMenu(void);
u8 pokemon_ailments_get_primary(u32 status);
u8 *GetMonNickname(struct Pokemon *mon, u8 *dst);
u8 GetCursorSelectionMonId(void);
bool8 FieldCallback_PrepareFadeInFromMenu(void);
void sub_81B7F60(void);

void sub_81B0FCC(u8 partyIdx, u8 a);
void sub_81B1370(u8 taskId);
void display_pokemon_menu_message(u8 windowId);
void sub_81B1F18(u8 taskId, u8 pokemonIdx, s8 a, s16 hp, TaskFunc func);
void sub_81B1B5C(void *a, u8 b);
u8 sub_81B1BD4();
void sub_81B8448();
void sub_81B8518(u8 unused);
u8 sub_81B1360(void);
void sub_81B8904(u8 arg0, void (*callback)(void));
void OpenPartyMenuInBattle(u8 caseId);
u16 ItemIdToBattleMoveId(u16 itemId);
u8 sub_81B205C(struct Pokemon* a);
void sub_81B617C(void);
u8 sub_81B6D14(u16 a);
bool8 hm_add_c3_without_phase_2(void);

extern void dp05_ether(u8, u16, TaskFunc);
extern void dp05_pp_up(u8, u16, TaskFunc);
extern void dp05_rare_candy(u8, u16, TaskFunc);

extern void sub_81B67C8(u8, u16, TaskFunc);
extern void sub_81B79E8(u8, u16, TaskFunc);
extern void sub_81B6DC4(u8, u16, TaskFunc);
extern void sub_81B7C74(u8, u16, TaskFunc);
extern u16 ItemIdToBattleMoveId(u16);

#endif // GUARD_PARTY_MENU_H
