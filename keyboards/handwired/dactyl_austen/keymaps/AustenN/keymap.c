
/* A QWERTY 4 Layer layout for the Dactyl 6x6 Keyboard */

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

/* keyboard layers */
#define _QWERTY 0
#define _NUMS 1
#define _FUNC 2
#define _EDIT 3
#define _TMUX 4
#define _ARROW 5

/* special keycodes */
#define SYMBS LM(_NUMS, MOD_LSFT)
#define NUMS MO(_NUMS)
#define SPACE LT(_FUNC, KC_SPC)
#define BSPACE LT(_EDIT, KC_BSPC)
#define DELETE LT(_TMUX, KC_DEL)
#define ENTER MT(MOD_RSFT, KC_ENT)
#define ARROW MO(_ARROW)

/* combos */
/* my macros */
enum custom_keycodes {
/*--------------------------------------*
 *            bash commands             *
 *--------------------------------------*/
   COMPILE_ = SAFE_RANGE,
   TAR_,
   CD_BACK_,
   CD_PREV_,

   TMUX_LW_,
   TMUX_RW_,
   TMUX_RP_,
   TMUX_LP_,
   TMUX_DP_,
   TMUX_UP_,

/*--------------------------------------*
 *            vim commands              *
 *--------------------------------------*/
   /* Functions and movements */
   SVE_ALL_,
   QT_ALL_,
   QT_ONE_,
   QT_TAB_,
   GO_UP_,
   GO_DOWN_,
   GO_LEFT_,
   GO_RGHT_,
   LINSTRT_,
   LIN_END_,
   GOWORD_,
   ENDWORD_,
   WORD_BK_,
   TABLEFT_,
   TABRGHT_,
   BCURSOR_,
   FCURSOR_,
   WINDOW_,
   CENTER_,
   COMMAND_,

   /* Edits and insert marcos */
   LINEUP_,
   LINEDWN_,
   REPLACE_,
   PTRDRF_,
   CINIGN_,
   LBRKT_,
   RBRKT_,
   REG_W_,
   REG_S_,
   UPPER_,
   LOWER_,
   D_LINE_,
   DI_LIN_,
   DI_PRN_,
   DI_BRK_,
   DP_WRD_,
   DN_WRD_,
   DWRD_I_,
   FORMAT_,
   PASTEOS_,
   VIMRC_
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* layer template
  [_FUNC] = LAYOUT(
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,                            _______ ,  _______ ,  _______ ,  _______ ,  _______ ,

                                                _______ ,  _______ ,      _______ ,  _______ ,
                                                           _______ ,      _______ ,
                                     _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______
  ),
*/

   [_QWERTY] = LAYOUT(
     KC_EQL  ,  KC_1    ,  KC_2    ,  KC_3    ,  KC_4    ,  KC_5    ,      KC_6    ,  KC_7    ,  KC_8    ,  KC_9    ,  KC_0    ,  KC_MINS ,
     KC_TAB  ,  KC_Q    ,  KC_W    ,  KC_E    ,  KC_R    ,  KC_T    ,      KC_Y    ,  KC_U    ,  KC_I    ,  KC_O    ,  KC_P    ,  KC_BSLS ,
     KC_TAB  ,  KC_A    ,  KC_S    ,  KC_D    ,  KC_F    ,  KC_G    ,      KC_H    ,  KC_J    ,  KC_K    ,  KC_L    ,  KC_SCLN ,  KC_QUOT ,
     KC_LCTL ,  KC_Z    ,  KC_X    ,  KC_C    ,  KC_V    ,  KC_B    ,      KC_N    ,  KC_M    ,  KC_COMM ,  KC_DOT  ,  KC_SLSH ,  KC_RCTL ,
     _______ ,  _______ ,  _______ ,  _______ ,  ARROW   ,                            KC_LEFT ,  KC_DOWN ,  KC_UP   ,  KC_RGHT ,  _______ ,

                                                 KC_LALT ,  KC_ESC  ,      KC_PGUP ,  KC_RALT ,
                                                            KC_CAPS ,      KC_PGDN ,
                                      DELETE  ,  BSPACE  ,  SYMBS   ,      NUMS    ,  SPACE   ,  ENTER
  ),

  [_NUMS] = LAYOUT(
     _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
<<<<<<< HEAD
     _______ ,  KC_F11  ,  KC_F12  ,  KC_F13  ,  KC_F14  ,  KC_F15  ,      KC_GRV  ,  KC_LBRC ,  KC_RBRC ,  _______ ,  _______ ,  _______ ,
=======
     _______ ,  KC_F11  ,  KC_F12  ,  KC_F13  ,  KC_F14  ,  KC_F15  ,      KC_GRV  ,  LBRKT_  ,  RBRKT_  ,  _______ ,  _______ ,  _______ ,
>>>>>>> 964039842fb81923e64169cf81d1f8831a689de0
     KC_EQL  ,  KC_1    ,  KC_2    ,  KC_3    ,  KC_4    ,  KC_5    ,      KC_6    ,  KC_7    ,  KC_8    ,  KC_9    ,  KC_0    ,  KC_MINS ,
     _______ ,  KC_F1   ,  KC_F2   ,  KC_F3   ,  KC_F4   ,  KC_F5   ,      KC_F6   ,  KC_F7   ,  KC_F8   ,  KC_F9   ,  KC_F10  ,  _______ ,
     _______ ,  _______ ,  _______ ,  _______ ,  _______ ,                            _______ ,  _______ ,  _______ ,  _______ ,  _______ ,

                                                 _______ ,  _______ ,      _______ ,  _______ ,
                                                            _______ ,      _______ ,
                                      _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______
  ),

  [_FUNC] = LAYOUT(
     _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
     _______ ,  ENDWORD_,  GOWORD_ ,  TABLEFT_,  TABRGHT_,  _______ ,      _______ ,  BCURSOR_,  FCURSOR_,  _______ ,  _______ ,  _______ ,
     _______ ,  _______ ,  WINDOW_ ,  SVE_ALL_,  KC_ESC  ,  S(KC_G) ,      GO_LEFT_,  GO_DOWN_,  GO_UP_  ,  GO_RGHT_,  _______ ,  _______ ,
     _______ ,  C(KC_Z) ,  QT_ONE_ ,  QT_TAB_ ,  QT_ALL_ ,  WORD_BK_,      COMMAND_,  C(KC_D) ,  C(KC_U) ,  _______ ,  _______ ,  _______ ,
     _______ ,  _______ ,  _______ ,  _______ ,  _______ ,                            _______ ,  _______ ,  _______ ,  _______ ,  _______ ,

                                                 _______ ,  _______ ,      _______ ,  _______ ,
                                                            _______ ,      _______ ,
                                      LINSTRT_,  LIN_END_,  CENTER_ ,      _______ ,  _______ ,  _______
  ),

  [_EDIT] = LAYOUT(
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  VIMRC_  ,
    _______ ,  _______ ,  REG_W_  ,  _______ ,  _______ ,  REPLACE_,      _______ ,  KC_LBRC ,  KC_RBRC ,  _______ ,  _______ ,  _______ ,
    _______ ,  CINIGN_ ,  REG_S_  ,  D_LINE_ ,  PTRDRF_ ,  _______ ,      LINEUP_ ,  DP_WRD_ ,  UPPER_  ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  PASTEOS_,  _______ ,      LINEDWN_,  DN_WRD_ ,  LOWER_  ,  FORMAT_ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,                            _______ ,  _______ ,  _______ ,  _______ ,  _______ ,

                                                _______ ,  _______ ,      _______ ,  _______ ,
                                                           _______ ,      DI_BRK_ ,
                                     _______ ,  _______ ,  _______ ,      DI_PRN_ ,  DI_LIN_ ,  DWRD_I_
  ),

  [_TMUX] = LAYOUT(
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  TMUX_LW_,  TMUX_RW_,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      TMUX_LP_,  TMUX_DP_,  TMUX_UP_,  TMUX_RP_,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,                            _______ ,  _______ ,  _______ ,  _______ ,  _______ ,

                                                _______ ,  _______ ,      _______ ,  _______ ,
                                                           _______ ,      _______ ,
                                     _______ ,  _______ ,  _______ ,      _______ ,  C(KC_B) ,  _______
  ),

  [_ARROW] = LAYOUT(
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      KC_LEFT ,  KC_DOWN ,  KC_UP   ,  KC_RGHT ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______ ,  _______ ,  _______ ,  _______ ,
    _______ ,  _______ ,  _______ ,  _______ ,  _______ ,                            _______ ,  _______ ,  _______ ,  _______ ,  _______ ,

                                                _______ ,  _______ ,      _______ ,  _______ ,
                                                           _______ ,      _______ ,
                                     _______ ,  _______ ,  _______ ,      _______ ,  _______ ,  _______
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

   switch (keycode) {

      case TMUX_LW_:
         if(record -> event.pressed) {
            SEND_STRING(SS_LCTRL("b")"p");
         }
            break;

      case TMUX_RW_:
         if(record -> event.pressed) {
            SEND_STRING(SS_LCTRL("b")"n");
         }
            break;

      case TMUX_RP_:
         if(record -> event.pressed) {
            SEND_STRING(SS_LCTRL("b")SS_TAP(X_RIGHT));
         }
            break;

      case TMUX_LP_:
         if(record -> event.pressed) {
            SEND_STRING(SS_LCTRL("b")SS_TAP(X_LEFT));
         }
            break;

      case TMUX_UP_:
         if(record -> event.pressed) {
            SEND_STRING(SS_LCTRL("b")SS_TAP(X_UP));
         }
            break;

      case TMUX_DP_:
         if(record -> event.pressed) {
            SEND_STRING(SS_LCTRL("b")SS_TAP(X_DOWN));
         }
            break;

      case SVE_ALL_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)":wa"SS_TAP(X_ENTER));
         }
         break;

      case QT_ALL_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)":qa"SS_TAP(X_ENTER));
         }
         break;

      case QT_TAB_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)":tabc"SS_TAP(X_ENTER));
         }
         break;

      case QT_ONE_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)":q"SS_TAP(X_ENTER));
         }
         break;

      case GO_UP_:
         if (record->event.pressed) {
            (SEND_STRING(SS_TAP(X_ESCAPE)"lki"));
         }
         break;

      case GO_DOWN_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"lji");
         }
         break;

      case GO_LEFT_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"i");
         }
         break;

      case GO_RGHT_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"la");
         }
         break;

      case LINSTRT_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"^i");
         }
         break;

      case LIN_END_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"$a");
         }
         break;

      case GOWORD_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"lwi");
         }
         break;

      case ENDWORD_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"lea");
         }
         break;

      case WORD_BK_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"bi");
         }
         break;

      case TABLEFT_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"gT");
         }
         break;

      case TABRGHT_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"gt");
         }
         break;

      case BCURSOR_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)SS_LCTRL("o"));
         }
         break;

      case FCURSOR_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)SS_LCTRL("i"));
         }
         break;

      case WINDOW_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)SS_LCTRL("w")"w");
         }
         break;

      case CENTER_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"z.");
         }
         break;

      case COMMAND_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)":");
         }
         break;

      case LINEUP_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"ddkkp");
         }
         break;

      case LINEDWN_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"ddp");
         }
         break;

      case REPLACE_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"ldiwP");
         }
         break;

      case PTRDRF_:
         if (record->event.pressed) {
            SEND_STRING("->");
         }
         break;

      case CINIGN_:
         if (record->event.pressed) {
            SEND_STRING("cin.ignore(INT_MAX, '\\n');"SS_TAP(X_ENTER));
         }
         break;

      case RBRKT_:
         if (record->event.pressed) {
            SEND_STRING("}");
         }
         break;

      case LBRKT_:
         if (record->event.pressed) {
            SEND_STRING("{"SS_TAP(X_ENTER)"}"SS_TAP(X_ESCAPE)"ko");
         }
         break;

      case REG_S_:
         if (record->event.pressed) {
            SEND_STRING("\"s");
         }
         break;

      case REG_W_:
         if (record->event.pressed) {
            SEND_STRING("\"w");
         }
         break;

      case UPPER_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"gUiw`]a");
         }
         break;

      case LOWER_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"guiw`]a");
         }
         break;

      case D_LINE_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"lDa");
         }
         break;

      case DI_LIN_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"ddA");
         }
         break;

      case DI_PRN_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"di)i");
         }
         break;

      case DI_BRK_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"di}i");
         }
         break;

      case DP_WRD_:
         if (record->event.pressed) {
            SEND_STRING(SS_LCTRL("w"));
         }
         break;

      case DN_WRD_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"wdwi");
         }
         break;

      case DWRD_I_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"ldiwi");
         }
         break;

      case FORMAT_:
         if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESCAPE)"G=gg"SS_TAP(X_F5));
         }
         break;

      case PASTEOS_:
         if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LCTRL)SS_LSFT("v")SS_UP(X_LCTRL));
         }
         break;

      case VIMRC_:
         if (record->event.pressed) {

         }
         break;
   }
   return true;
}
