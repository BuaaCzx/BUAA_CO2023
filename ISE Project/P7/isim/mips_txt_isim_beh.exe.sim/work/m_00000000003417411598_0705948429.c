/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Hihiczx/Documents/ISE Project/P7/ByteExtendForStore.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {8U, 0U};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {15U, 0U};



static void Always_29_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t32[8];
    char t62[8];
    char t63[8];
    char t66[8];
    char t98[8];
    char t99[8];
    char t102[8];
    char t134[8];
    char t135[8];
    char t138[8];
    char t172[8];
    char t173[8];
    char t174[8];
    char t175[8];
    char t176[8];
    char t179[8];
    char t181[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t136;
    char *t137;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t177;
    char *t178;
    char *t180;
    char *t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB161;

LAB158:    if (t18 != 0)
        goto LAB160;

LAB159:    *((unsigned int *)t6) = 1;

LAB161:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB162;

LAB163:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB237;

LAB234:    if (t18 != 0)
        goto LAB236;

LAB235:    *((unsigned int *)t6) = 1;

LAB237:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB238;

LAB239:
LAB240:
LAB164:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);

LAB21:    xsi_set_current_line(33, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t21);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t29);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t29);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB25;

LAB22:    if (t42 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t32) = 1;

LAB25:    memset(t31, 0, 8);
    t46 = (t32 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t32);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t46) != 0)
        goto LAB28;

LAB29:    t53 = (t31 + 4);
    t54 = *((unsigned int *)t31);
    t55 = *((unsigned int *)t53);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB30;

LAB31:    t58 = *((unsigned int *)t31);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t53) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t31) > 0)
        goto LAB36;

LAB37:    memcpy(t30, t62, 8);

LAB38:    t171 = (t0 + 1768);
    xsi_vlogvar_assign_value(t171, t30, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB93;

LAB90:    if (t18 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t31) = 1;

LAB93:    memset(t30, 0, 8);
    t8 = (t31 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t8) != 0)
        goto LAB96;

LAB97:    t22 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t22);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB98;

LAB99:    t42 = *((unsigned int *)t30);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t47 = (t43 || t44);
    if (t47 > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t22) > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t30) > 0)
        goto LAB104;

LAB105:    memcpy(t6, t63, 8);

LAB106:    t193 = (t0 + 1928);
    xsi_vlogvar_assign_value(t193, t6, 0, 0, 32);
    goto LAB20;

LAB24:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t31) = 1;
    goto LAB29;

LAB28:    t52 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB29;

LAB30:    t57 = ((char*)((ng2)));
    goto LAB31;

LAB32:    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng2)));
    memset(t66, 0, 8);
    t67 = (t65 + 4);
    t68 = (t64 + 4);
    t69 = *((unsigned int *)t65);
    t70 = *((unsigned int *)t64);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB42;

LAB39:    if (t78 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t66) = 1;

LAB42:    memset(t63, 0, 8);
    t82 = (t66 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t66);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t82) != 0)
        goto LAB45;

LAB46:    t89 = (t63 + 4);
    t90 = *((unsigned int *)t63);
    t91 = *((unsigned int *)t89);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB47;

LAB48:    t94 = *((unsigned int *)t63);
    t95 = (~(t94));
    t96 = *((unsigned int *)t89);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t89) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t63) > 0)
        goto LAB53;

LAB54:    memcpy(t62, t98, 8);

LAB55:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t30, 4, t57, 4, t62, 4);
    goto LAB38;

LAB36:    memcpy(t30, t57, 8);
    goto LAB38;

LAB41:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t63) = 1;
    goto LAB46;

LAB45:    t88 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB46;

LAB47:    t93 = ((char*)((ng3)));
    goto LAB48;

LAB49:    t100 = (t0 + 1208U);
    t101 = *((char **)t100);
    t100 = ((char*)((ng3)));
    memset(t102, 0, 8);
    t103 = (t101 + 4);
    t104 = (t100 + 4);
    t105 = *((unsigned int *)t101);
    t106 = *((unsigned int *)t100);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t103);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = (t107 | t110);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t104);
    t114 = (t112 | t113);
    t115 = (~(t114));
    t116 = (t111 & t115);
    if (t116 != 0)
        goto LAB59;

LAB56:    if (t114 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t102) = 1;

LAB59:    memset(t99, 0, 8);
    t118 = (t102 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t102);
    t122 = (t121 & t120);
    t123 = (t122 & 1U);
    if (t123 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t118) != 0)
        goto LAB62;

LAB63:    t125 = (t99 + 4);
    t126 = *((unsigned int *)t99);
    t127 = *((unsigned int *)t125);
    t128 = (t126 || t127);
    if (t128 > 0)
        goto LAB64;

LAB65:    t130 = *((unsigned int *)t99);
    t131 = (~(t130));
    t132 = *((unsigned int *)t125);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t125) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t99) > 0)
        goto LAB70;

LAB71:    memcpy(t98, t134, 8);

LAB72:    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t62, 4, t93, 4, t98, 4);
    goto LAB55;

LAB53:    memcpy(t62, t93, 8);
    goto LAB55;

LAB58:    t117 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t99) = 1;
    goto LAB63;

LAB62:    t124 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB63;

LAB64:    t129 = ((char*)((ng4)));
    goto LAB65;

LAB66:    t136 = (t0 + 1208U);
    t137 = *((char **)t136);
    t136 = ((char*)((ng5)));
    memset(t138, 0, 8);
    t139 = (t137 + 4);
    t140 = (t136 + 4);
    t141 = *((unsigned int *)t137);
    t142 = *((unsigned int *)t136);
    t143 = (t141 ^ t142);
    t144 = *((unsigned int *)t139);
    t145 = *((unsigned int *)t140);
    t146 = (t144 ^ t145);
    t147 = (t143 | t146);
    t148 = *((unsigned int *)t139);
    t149 = *((unsigned int *)t140);
    t150 = (t148 | t149);
    t151 = (~(t150));
    t152 = (t147 & t151);
    if (t152 != 0)
        goto LAB76;

LAB73:    if (t150 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t138) = 1;

LAB76:    memset(t135, 0, 8);
    t154 = (t138 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (~(t155));
    t157 = *((unsigned int *)t138);
    t158 = (t157 & t156);
    t159 = (t158 & 1U);
    if (t159 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t154) != 0)
        goto LAB79;

LAB80:    t161 = (t135 + 4);
    t162 = *((unsigned int *)t135);
    t163 = *((unsigned int *)t161);
    t164 = (t162 || t163);
    if (t164 > 0)
        goto LAB81;

LAB82:    t166 = *((unsigned int *)t135);
    t167 = (~(t166));
    t168 = *((unsigned int *)t161);
    t169 = (t167 || t168);
    if (t169 > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t161) > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t135) > 0)
        goto LAB87;

LAB88:    memcpy(t134, t170, 8);

LAB89:    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t98, 4, t129, 4, t134, 4);
    goto LAB72;

LAB70:    memcpy(t98, t129, 8);
    goto LAB72;

LAB75:    t153 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t135) = 1;
    goto LAB80;

LAB79:    t160 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB80;

LAB81:    t165 = ((char*)((ng6)));
    goto LAB82;

LAB83:    t170 = ((char*)((ng1)));
    goto LAB84;

LAB85:    xsi_vlog_unsigned_bit_combine(t134, 4, t165, 4, t170, 4);
    goto LAB89;

LAB87:    memcpy(t134, t165, 8);
    goto LAB89;

LAB92:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t30) = 1;
    goto LAB97;

LAB96:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB97;

LAB98:    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    memset(t62, 0, 8);
    t28 = (t62 + 4);
    t45 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 0);
    *((unsigned int *)t62) = t37;
    t38 = *((unsigned int *)t45);
    t39 = (t38 >> 0);
    *((unsigned int *)t28) = t39;
    t40 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t40 & 255U);
    t41 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t41 & 255U);
    t46 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 32, 32, 2U, t46, 24, t62, 8);
    goto LAB99;

LAB100:    t52 = (t0 + 1208U);
    t53 = *((char **)t52);
    t52 = ((char*)((ng2)));
    memset(t98, 0, 8);
    t57 = (t53 + 4);
    t64 = (t52 + 4);
    t48 = *((unsigned int *)t53);
    t49 = *((unsigned int *)t52);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t57);
    t54 = *((unsigned int *)t64);
    t55 = (t51 ^ t54);
    t56 = (t50 | t55);
    t58 = *((unsigned int *)t57);
    t59 = *((unsigned int *)t64);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t69 = (t56 & t61);
    if (t69 != 0)
        goto LAB110;

LAB107:    if (t60 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t98) = 1;

LAB110:    memset(t66, 0, 8);
    t67 = (t98 + 4);
    t70 = *((unsigned int *)t67);
    t71 = (~(t70));
    t72 = *((unsigned int *)t98);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t67) != 0)
        goto LAB113;

LAB114:    t81 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t81);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB115;

LAB116:    t86 = *((unsigned int *)t66);
    t87 = (~(t86));
    t90 = *((unsigned int *)t81);
    t91 = (t87 || t90);
    if (t91 > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t81) > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t66) > 0)
        goto LAB121;

LAB122:    memcpy(t63, t134, 8);

LAB123:    goto LAB101;

LAB102:    xsi_vlog_unsigned_bit_combine(t6, 32, t32, 32, t63, 32);
    goto LAB106;

LAB104:    memcpy(t6, t32, 8);
    goto LAB106;

LAB109:    t65 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB110;

LAB111:    *((unsigned int *)t66) = 1;
    goto LAB114;

LAB113:    t68 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB114;

LAB115:    t82 = ((char*)((ng1)));
    t88 = (t0 + 1368U);
    t89 = *((char **)t88);
    memset(t102, 0, 8);
    t88 = (t102 + 4);
    t93 = (t89 + 4);
    t78 = *((unsigned int *)t89);
    t79 = (t78 >> 0);
    *((unsigned int *)t102) = t79;
    t80 = *((unsigned int *)t93);
    t83 = (t80 >> 0);
    *((unsigned int *)t88) = t83;
    t84 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t84 & 255U);
    t85 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t85 & 255U);
    t100 = ((char*)((ng1)));
    xsi_vlogtype_concat(t99, 32, 32, 3U, t100, 16, t102, 8, t82, 8);
    goto LAB116;

LAB117:    t101 = (t0 + 1208U);
    t103 = *((char **)t101);
    t101 = ((char*)((ng3)));
    memset(t138, 0, 8);
    t104 = (t103 + 4);
    t117 = (t101 + 4);
    t92 = *((unsigned int *)t103);
    t94 = *((unsigned int *)t101);
    t95 = (t92 ^ t94);
    t96 = *((unsigned int *)t104);
    t97 = *((unsigned int *)t117);
    t105 = (t96 ^ t97);
    t106 = (t95 | t105);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t117);
    t109 = (t107 | t108);
    t110 = (~(t109));
    t111 = (t106 & t110);
    if (t111 != 0)
        goto LAB127;

LAB124:    if (t109 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t138) = 1;

LAB127:    memset(t135, 0, 8);
    t124 = (t138 + 4);
    t112 = *((unsigned int *)t124);
    t113 = (~(t112));
    t114 = *((unsigned int *)t138);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t124) != 0)
        goto LAB130;

LAB131:    t129 = (t135 + 4);
    t119 = *((unsigned int *)t135);
    t120 = *((unsigned int *)t129);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB132;

LAB133:    t131 = *((unsigned int *)t135);
    t132 = (~(t131));
    t133 = *((unsigned int *)t129);
    t141 = (t132 || t133);
    if (t141 > 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t129) > 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t135) > 0)
        goto LAB138;

LAB139:    memcpy(t134, t174, 8);

LAB140:    goto LAB118;

LAB119:    xsi_vlog_unsigned_bit_combine(t63, 32, t99, 32, t134, 32);
    goto LAB123;

LAB121:    memcpy(t63, t99, 8);
    goto LAB123;

LAB126:    t118 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB127;

LAB128:    *((unsigned int *)t135) = 1;
    goto LAB131;

LAB130:    t125 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB131;

LAB132:    t136 = ((char*)((ng1)));
    t137 = (t0 + 1368U);
    t139 = *((char **)t137);
    memset(t173, 0, 8);
    t137 = (t173 + 4);
    t140 = (t139 + 4);
    t122 = *((unsigned int *)t139);
    t123 = (t122 >> 0);
    *((unsigned int *)t173) = t123;
    t126 = *((unsigned int *)t140);
    t127 = (t126 >> 0);
    *((unsigned int *)t137) = t127;
    t128 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t128 & 255U);
    t130 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t130 & 255U);
    t153 = ((char*)((ng1)));
    xsi_vlogtype_concat(t172, 32, 32, 3U, t153, 8, t173, 8, t136, 16);
    goto LAB133;

LAB134:    t154 = (t0 + 1208U);
    t160 = *((char **)t154);
    t154 = ((char*)((ng5)));
    memset(t176, 0, 8);
    t161 = (t160 + 4);
    t165 = (t154 + 4);
    t142 = *((unsigned int *)t160);
    t143 = *((unsigned int *)t154);
    t144 = (t142 ^ t143);
    t145 = *((unsigned int *)t161);
    t146 = *((unsigned int *)t165);
    t147 = (t145 ^ t146);
    t148 = (t144 | t147);
    t149 = *((unsigned int *)t161);
    t150 = *((unsigned int *)t165);
    t151 = (t149 | t150);
    t152 = (~(t151));
    t155 = (t148 & t152);
    if (t155 != 0)
        goto LAB144;

LAB141:    if (t151 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t176) = 1;

LAB144:    memset(t175, 0, 8);
    t171 = (t176 + 4);
    t156 = *((unsigned int *)t171);
    t157 = (~(t156));
    t158 = *((unsigned int *)t176);
    t159 = (t158 & t157);
    t162 = (t159 & 1U);
    if (t162 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t171) != 0)
        goto LAB147;

LAB148:    t178 = (t175 + 4);
    t163 = *((unsigned int *)t175);
    t164 = *((unsigned int *)t178);
    t166 = (t163 || t164);
    if (t166 > 0)
        goto LAB149;

LAB150:    t188 = *((unsigned int *)t175);
    t189 = (~(t188));
    t190 = *((unsigned int *)t178);
    t191 = (t189 || t190);
    if (t191 > 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t178) > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t175) > 0)
        goto LAB155;

LAB156:    memcpy(t174, t192, 8);

LAB157:    goto LAB135;

LAB136:    xsi_vlog_unsigned_bit_combine(t134, 32, t172, 32, t174, 32);
    goto LAB140;

LAB138:    memcpy(t134, t172, 8);
    goto LAB140;

LAB143:    t170 = (t176 + 4);
    *((unsigned int *)t176) = 1;
    *((unsigned int *)t170) = 1;
    goto LAB144;

LAB145:    *((unsigned int *)t175) = 1;
    goto LAB148;

LAB147:    t177 = (t175 + 4);
    *((unsigned int *)t175) = 1;
    *((unsigned int *)t177) = 1;
    goto LAB148;

LAB149:    t180 = ((char*)((ng1)));
    t182 = (t0 + 1368U);
    t183 = *((char **)t182);
    memset(t181, 0, 8);
    t182 = (t181 + 4);
    t184 = (t183 + 4);
    t167 = *((unsigned int *)t183);
    t168 = (t167 >> 0);
    *((unsigned int *)t181) = t168;
    t169 = *((unsigned int *)t184);
    t185 = (t169 >> 0);
    *((unsigned int *)t182) = t185;
    t186 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t186 & 255U);
    t187 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t187 & 255U);
    xsi_vlogtype_concat(t179, 32, 32, 2U, t181, 8, t180, 24);
    goto LAB150;

LAB151:    t192 = ((char*)((ng7)));
    goto LAB152;

LAB153:    xsi_vlog_unsigned_bit_combine(t174, 32, t179, 32, t192, 32);
    goto LAB157;

LAB155:    memcpy(t174, t179, 8);
    goto LAB157;

LAB160:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB161;

LAB162:    xsi_set_current_line(41, ng0);

LAB165:    xsi_set_current_line(42, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t21);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t29);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t29);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB169;

LAB166:    if (t42 != 0)
        goto LAB168;

LAB167:    *((unsigned int *)t32) = 1;

LAB169:    memset(t31, 0, 8);
    t46 = (t32 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t32);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t46) != 0)
        goto LAB172;

LAB173:    t53 = (t31 + 4);
    t54 = *((unsigned int *)t31);
    t55 = *((unsigned int *)t53);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB174;

LAB175:    t58 = *((unsigned int *)t31);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t53) > 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t31) > 0)
        goto LAB180;

LAB181:    memcpy(t30, t62, 8);

LAB182:    t101 = (t0 + 1768);
    xsi_vlogvar_assign_value(t101, t30, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB203;

LAB200:    if (t18 != 0)
        goto LAB202;

LAB201:    *((unsigned int *)t31) = 1;

LAB203:    memset(t30, 0, 8);
    t8 = (t31 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB204;

LAB205:    if (*((unsigned int *)t8) != 0)
        goto LAB206;

LAB207:    t22 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t22);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB208;

LAB209:    t42 = *((unsigned int *)t30);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t47 = (t43 || t44);
    if (t47 > 0)
        goto LAB210;

LAB211:    if (*((unsigned int *)t22) > 0)
        goto LAB212;

LAB213:    if (*((unsigned int *)t30) > 0)
        goto LAB214;

LAB215:    memcpy(t6, t63, 8);

LAB216:    t101 = (t0 + 1928);
    xsi_vlogvar_assign_value(t101, t6, 0, 0, 32);
    goto LAB164;

LAB168:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB169;

LAB170:    *((unsigned int *)t31) = 1;
    goto LAB173;

LAB172:    t52 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB173;

LAB174:    t57 = ((char*)((ng5)));
    goto LAB175;

LAB176:    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng3)));
    memset(t66, 0, 8);
    t67 = (t65 + 4);
    t68 = (t64 + 4);
    t69 = *((unsigned int *)t65);
    t70 = *((unsigned int *)t64);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB186;

LAB183:    if (t78 != 0)
        goto LAB185;

LAB184:    *((unsigned int *)t66) = 1;

LAB186:    memset(t63, 0, 8);
    t82 = (t66 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t66);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t82) != 0)
        goto LAB189;

LAB190:    t89 = (t63 + 4);
    t90 = *((unsigned int *)t63);
    t91 = *((unsigned int *)t89);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB191;

LAB192:    t94 = *((unsigned int *)t63);
    t95 = (~(t94));
    t96 = *((unsigned int *)t89);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB193;

LAB194:    if (*((unsigned int *)t89) > 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t63) > 0)
        goto LAB197;

LAB198:    memcpy(t62, t100, 8);

LAB199:    goto LAB177;

LAB178:    xsi_vlog_unsigned_bit_combine(t30, 4, t57, 4, t62, 4);
    goto LAB182;

LAB180:    memcpy(t30, t57, 8);
    goto LAB182;

LAB185:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB186;

LAB187:    *((unsigned int *)t63) = 1;
    goto LAB190;

LAB189:    t88 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB190;

LAB191:    t93 = ((char*)((ng8)));
    goto LAB192;

LAB193:    t100 = ((char*)((ng1)));
    goto LAB194;

LAB195:    xsi_vlog_unsigned_bit_combine(t62, 4, t93, 4, t100, 4);
    goto LAB199;

LAB197:    memcpy(t62, t93, 8);
    goto LAB199;

LAB202:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB203;

LAB204:    *((unsigned int *)t30) = 1;
    goto LAB207;

LAB206:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB207;

LAB208:    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    memset(t62, 0, 8);
    t28 = (t62 + 4);
    t45 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 0);
    *((unsigned int *)t62) = t37;
    t38 = *((unsigned int *)t45);
    t39 = (t38 >> 0);
    *((unsigned int *)t28) = t39;
    t40 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t40 & 65535U);
    t41 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t41 & 65535U);
    t46 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 32, 32, 2U, t46, 16, t62, 16);
    goto LAB209;

LAB210:    t52 = (t0 + 1208U);
    t53 = *((char **)t52);
    t52 = ((char*)((ng3)));
    memset(t98, 0, 8);
    t57 = (t53 + 4);
    t64 = (t52 + 4);
    t48 = *((unsigned int *)t53);
    t49 = *((unsigned int *)t52);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t57);
    t54 = *((unsigned int *)t64);
    t55 = (t51 ^ t54);
    t56 = (t50 | t55);
    t58 = *((unsigned int *)t57);
    t59 = *((unsigned int *)t64);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t69 = (t56 & t61);
    if (t69 != 0)
        goto LAB220;

LAB217:    if (t60 != 0)
        goto LAB219;

LAB218:    *((unsigned int *)t98) = 1;

LAB220:    memset(t66, 0, 8);
    t67 = (t98 + 4);
    t70 = *((unsigned int *)t67);
    t71 = (~(t70));
    t72 = *((unsigned int *)t98);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB221;

LAB222:    if (*((unsigned int *)t67) != 0)
        goto LAB223;

LAB224:    t81 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t81);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB225;

LAB226:    t86 = *((unsigned int *)t66);
    t87 = (~(t86));
    t90 = *((unsigned int *)t81);
    t91 = (t87 || t90);
    if (t91 > 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t81) > 0)
        goto LAB229;

LAB230:    if (*((unsigned int *)t66) > 0)
        goto LAB231;

LAB232:    memcpy(t63, t100, 8);

LAB233:    goto LAB211;

LAB212:    xsi_vlog_unsigned_bit_combine(t6, 32, t32, 32, t63, 32);
    goto LAB216;

LAB214:    memcpy(t6, t32, 8);
    goto LAB216;

LAB219:    t65 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB220;

LAB221:    *((unsigned int *)t66) = 1;
    goto LAB224;

LAB223:    t68 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB224;

LAB225:    t82 = ((char*)((ng1)));
    t88 = (t0 + 1368U);
    t89 = *((char **)t88);
    memset(t102, 0, 8);
    t88 = (t102 + 4);
    t93 = (t89 + 4);
    t78 = *((unsigned int *)t89);
    t79 = (t78 >> 0);
    *((unsigned int *)t102) = t79;
    t80 = *((unsigned int *)t93);
    t83 = (t80 >> 0);
    *((unsigned int *)t88) = t83;
    t84 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t84 & 65535U);
    t85 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t85 & 65535U);
    xsi_vlogtype_concat(t99, 32, 32, 2U, t102, 16, t82, 16);
    goto LAB226;

LAB227:    t100 = ((char*)((ng7)));
    goto LAB228;

LAB229:    xsi_vlog_unsigned_bit_combine(t63, 32, t99, 32, t100, 32);
    goto LAB233;

LAB231:    memcpy(t63, t99, 8);
    goto LAB233;

LAB236:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB237;

LAB238:    xsi_set_current_line(46, ng0);

LAB241:    xsi_set_current_line(47, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t22, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB240;

}


extern void work_m_00000000003417411598_0705948429_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000003417411598_0705948429", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003417411598_0705948429.didat");
	xsi_register_executes(pe);
}
