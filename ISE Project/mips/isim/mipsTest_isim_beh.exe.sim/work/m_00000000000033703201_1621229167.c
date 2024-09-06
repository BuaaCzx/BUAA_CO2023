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
static const char *ng0 = "C:/Users/Hihiczx/Documents/ISE Project/mips/GRF.v";
static int ng1[] = {0, 0};
static int ng2[] = {31, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "@%h: $%d <= %h";



static void Initial_38_0(char *t0)
{
    char t5[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;

LAB7:    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:
LAB1:    return;
LAB5:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(39, ng0);

LAB11:    xsi_set_current_line(40, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 3048);
    t19 = (t0 + 3048);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 3208);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 2);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB12:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB13;

}

static void Always_44_1(char *t0)
{
    char t13[8];
    char t18[8];
    char t19[8];
    char t56[8];
    char t81[8];
    char t90[8];
    char t97[8];
    char t105[8];
    char t143[8];
    char t144[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
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
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    int t160;
    int t161;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5192);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);

LAB21:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB25:    t5 = (t13 + 4);
    t30 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t5);
    t36 = (t30 || t33);
    if (t36 > 0)
        goto LAB26;

LAB27:    memcpy(t56, t13, 8);

LAB28:    memset(t81, 0, 8);
    t26 = (t56 + 4);
    t82 = *((unsigned int *)t26);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t26) != 0)
        goto LAB42;

LAB43:    t28 = (t81 + 4);
    t87 = *((unsigned int *)t81);
    t88 = *((unsigned int *)t28);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB44;

LAB45:    memcpy(t105, t81, 8);

LAB46:    t135 = (t105 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (~(t136));
    t138 = *((unsigned int *)t105);
    t139 = (t138 & t137);
    t140 = (t139 != 0);
    if (t140 > 0)
        goto LAB58;

LAB59:
LAB60:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB12;

LAB11:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;

LAB14:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    goto LAB8;

LAB12:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(46, ng0);

LAB18:    xsi_set_current_line(47, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3048);
    t20 = (t0 + 3048);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3048);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 3208);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t28, 32, 2);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB19:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, *((unsigned int *)t19), t39, 0LL);
    goto LAB20;

LAB22:    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB24:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    t11 = (t0 + 1848U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t37 = *((unsigned int *)t12);
    t40 = *((unsigned int *)t11);
    t41 = (t37 ^ t40);
    t42 = *((unsigned int *)t14);
    t43 = *((unsigned int *)t15);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t14);
    t47 = *((unsigned int *)t15);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB30;

LAB29:    if (t48 != 0)
        goto LAB31;

LAB32:    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t51 = *((unsigned int *)t17);
    t52 = (~(t51));
    t53 = *((unsigned int *)t18);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t17) != 0)
        goto LAB35;

LAB36:    t57 = *((unsigned int *)t13);
    t58 = *((unsigned int *)t19);
    t59 = (t57 & t58);
    *((unsigned int *)t56) = t59;
    t21 = (t13 + 4);
    t22 = (t19 + 4);
    t23 = (t56 + 4);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t22);
    t62 = (t60 | t61);
    *((unsigned int *)t23) = t62;
    t63 = *((unsigned int *)t23);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB30:    *((unsigned int *)t18) = 1;
    goto LAB32;

LAB31:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t19) = 1;
    goto LAB36;

LAB35:    t20 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB36;

LAB37:    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t23);
    *((unsigned int *)t56) = (t65 | t66);
    t24 = (t13 + 4);
    t25 = (t19 + 4);
    t67 = *((unsigned int *)t13);
    t68 = (~(t67));
    t69 = *((unsigned int *)t24);
    t70 = (~(t69));
    t71 = *((unsigned int *)t19);
    t72 = (~(t71));
    t73 = *((unsigned int *)t25);
    t74 = (~(t73));
    t31 = (t68 & t70);
    t34 = (t72 & t74);
    t75 = (~(t31));
    t76 = (~(t34));
    t77 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t77 & t75);
    t78 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t75);
    t80 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t80 & t76);
    goto LAB39;

LAB40:    *((unsigned int *)t81) = 1;
    goto LAB43;

LAB42:    t27 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB43;

LAB44:    t29 = (t0 + 2648U);
    t32 = *((char **)t29);
    memset(t90, 0, 8);
    t29 = (t32 + 4);
    t91 = *((unsigned int *)t29);
    t92 = (~(t91));
    t93 = *((unsigned int *)t32);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t29) == 0)
        goto LAB47;

LAB49:    t96 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t96) = 1;

LAB50:    memset(t97, 0, 8);
    t98 = (t90 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t90);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t98) != 0)
        goto LAB53;

LAB54:    t106 = *((unsigned int *)t81);
    t107 = *((unsigned int *)t97);
    t108 = (t106 & t107);
    *((unsigned int *)t105) = t108;
    t109 = (t81 + 4);
    t110 = (t97 + 4);
    t111 = (t105 + 4);
    t112 = *((unsigned int *)t109);
    t113 = *((unsigned int *)t110);
    t114 = (t112 | t113);
    *((unsigned int *)t111) = t114;
    t115 = *((unsigned int *)t111);
    t116 = (t115 != 0);
    if (t116 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB47:    *((unsigned int *)t90) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t97) = 1;
    goto LAB54;

LAB53:    t104 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB54;

LAB55:    t117 = *((unsigned int *)t105);
    t118 = *((unsigned int *)t111);
    *((unsigned int *)t105) = (t117 | t118);
    t119 = (t81 + 4);
    t120 = (t97 + 4);
    t121 = *((unsigned int *)t81);
    t122 = (~(t121));
    t123 = *((unsigned int *)t119);
    t124 = (~(t123));
    t125 = *((unsigned int *)t97);
    t126 = (~(t125));
    t127 = *((unsigned int *)t120);
    t128 = (~(t127));
    t35 = (t122 & t124);
    t38 = (t126 & t128);
    t129 = (~(t35));
    t130 = (~(t38));
    t131 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t131 & t129);
    t132 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t132 & t130);
    t133 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t133 & t129);
    t134 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t134 & t130);
    goto LAB57;

LAB58:    xsi_set_current_line(50, ng0);

LAB61:    xsi_set_current_line(51, ng0);
    t141 = (t0 + 2328U);
    t142 = *((char **)t141);
    t141 = (t0 + 3048);
    t145 = (t0 + 3048);
    t146 = (t145 + 72U);
    t147 = *((char **)t146);
    t148 = (t0 + 3048);
    t149 = (t148 + 64U);
    t150 = *((char **)t149);
    t151 = (t0 + 1848U);
    t152 = *((char **)t151);
    xsi_vlog_generic_convert_array_indices(t143, t144, t147, t150, 2, 1, t152, 5, 2);
    t151 = (t143 + 4);
    t153 = *((unsigned int *)t151);
    t39 = (!(t153));
    t154 = (t144 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (!(t155));
    t157 = (t39 && t156);
    if (t157 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t3, 32, (char)118, t4, 5, (char)118, t5, 32);
    goto LAB60;

LAB62:    t158 = *((unsigned int *)t143);
    t159 = *((unsigned int *)t144);
    t160 = (t158 - t159);
    t161 = (t160 + 1);
    xsi_vlogvar_wait_assign_value(t141, t142, 0, *((unsigned int *)t144), t161, 0LL);
    goto LAB63;

}

static void Cont_57_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5304);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5208);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_58_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5368);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5224);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000033703201_1621229167_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_44_1,(void *)Cont_57_2,(void *)Cont_58_3};
	xsi_register_didat("work_m_00000000000033703201_1621229167", "isim/mipsTest_isim_beh.exe.sim/work/m_00000000000033703201_1621229167.didat");
	xsi_register_executes(pe);
}
