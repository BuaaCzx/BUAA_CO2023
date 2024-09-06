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
static const char *ng0 = "C:/Users/Hihiczx/Documents/ISE Project/P7/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Always_39_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t59[16];
    char t60[16];
    char t61[16];
    char t62[8];
    char t67[8];
    char t69[8];
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
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t70;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1368U);
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

LAB11:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
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
        goto LAB20;

LAB17:    if (t18 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t6) = 1;

LAB20:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB32;

LAB29:    if (t18 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t6) = 1;

LAB32:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
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
        goto LAB44;

LAB41:    if (t18 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t6) = 1;

LAB44:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
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
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;

LAB52:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
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
        goto LAB63;

LAB60:    if (t18 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;

LAB63:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
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
        goto LAB84;

LAB81:    if (t18 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t6) = 1;

LAB84:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
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
        goto LAB110;

LAB107:    if (t18 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t6) = 1;

LAB110:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB111;

LAB112:
LAB113:
LAB87:
LAB66:
LAB55:
LAB47:
LAB35:
LAB23:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    t28 = (t0 + 1208U);
    t30 = *((char **)t28);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t28 = (t29 + 4);
    t35 = (t30 + 4);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB14;

LAB15:
LAB16:    t58 = (t0 + 1768);
    xsi_vlogvar_assign_value(t58, t31, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB14:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t31) = (t42 | t43);
    t44 = (t29 + 4);
    t45 = (t30 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = *((unsigned int *)t45);
    t51 = (~(t50));
    t52 = *((unsigned int *)t30);
    t53 = (t52 & t51);
    t54 = (~(t49));
    t55 = (~(t53));
    t56 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t56 & t54);
    t57 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t57 & t55);
    goto LAB16;

LAB19:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    xsi_vlogtype_concat(t59, 33, 33, 2U, t6, 1, t3, 32);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t21 = *((char **)t7);
    memset(t31, 0, 8);
    t7 = (t31 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t31) = t17;
    t18 = *((unsigned int *)t22);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    xsi_vlogtype_concat(t60, 33, 33, 2U, t31, 1, t8, 32);
    xsi_vlog_unsigned_add(t61, 33, t59, 33, t60, 33);
    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t61, 0, 0, 33);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 8);
    t8 = (t4 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t31, 0, 8);
    t29 = (t31 + 4);
    t30 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t31) = t17;
    t18 = *((unsigned int *)t30);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t29) = t20;
    memset(t62, 0, 8);
    t35 = (t6 + 4);
    t36 = (t31 + 4);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t31);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t35);
    t27 = *((unsigned int *)t36);
    t32 = (t26 ^ t27);
    t33 = (t25 | t32);
    t34 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t36);
    t38 = (t34 | t37);
    t39 = (~(t38));
    t40 = (t33 & t39);
    if (t40 != 0)
        goto LAB26;

LAB25:    if (t38 != 0)
        goto LAB27;

LAB28:    t45 = (t0 + 1928);
    xsi_vlogvar_assign_value(t45, t62, 0, 0, 1);
    goto LAB23;

LAB26:    *((unsigned int *)t62) = 1;
    goto LAB28;

LAB27:    t44 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB28;

LAB31:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(47, ng0);

LAB36:    xsi_set_current_line(48, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    xsi_vlogtype_concat(t59, 33, 33, 2U, t6, 1, t3, 32);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t21 = *((char **)t7);
    memset(t31, 0, 8);
    t7 = (t31 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t31) = t17;
    t18 = *((unsigned int *)t22);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    xsi_vlogtype_concat(t60, 33, 33, 2U, t31, 1, t8, 32);
    xsi_vlog_unsigned_minus(t61, 33, t59, 33, t60, 33);
    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t61, 0, 0, 33);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 8);
    t8 = (t4 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t31, 0, 8);
    t29 = (t31 + 4);
    t30 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t31) = t17;
    t18 = *((unsigned int *)t30);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t29) = t20;
    memset(t62, 0, 8);
    t35 = (t6 + 4);
    t36 = (t31 + 4);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t31);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t35);
    t27 = *((unsigned int *)t36);
    t32 = (t26 ^ t27);
    t33 = (t25 | t32);
    t34 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t36);
    t38 = (t34 | t37);
    t39 = (~(t38));
    t40 = (t33 & t39);
    if (t40 != 0)
        goto LAB38;

LAB37:    if (t38 != 0)
        goto LAB39;

LAB40:    t45 = (t0 + 1928);
    xsi_vlogvar_assign_value(t45, t62, 0, 0, 1);
    goto LAB35;

LAB38:    *((unsigned int *)t62) = 1;
    goto LAB40;

LAB39:    t44 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB40;

LAB43:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(51, ng0);

LAB48:    xsi_set_current_line(52, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 1208U);
    t28 = *((char **)t22);
    memset(t62, 0, 8);
    t22 = (t62 + 4);
    t29 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 0);
    *((unsigned int *)t62) = t33;
    t34 = *((unsigned int *)t29);
    t37 = (t34 >> 0);
    *((unsigned int *)t22) = t37;
    t38 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t38 & 65535U);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t39 & 65535U);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t62, 16, t21, 16);
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB51:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(54, ng0);

LAB56:    xsi_set_current_line(55, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    *((unsigned int *)t30) = t39;
    t40 = *((unsigned int *)t30);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB57;

LAB58:
LAB59:    t44 = (t0 + 1768);
    xsi_vlogvar_assign_value(t44, t31, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB55;

LAB57:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t42 | t43);
    t35 = (t22 + 4);
    t36 = (t28 + 4);
    t46 = *((unsigned int *)t22);
    t47 = (~(t46));
    t48 = *((unsigned int *)t35);
    t50 = (~(t48));
    t51 = *((unsigned int *)t28);
    t52 = (~(t51));
    t54 = *((unsigned int *)t36);
    t55 = (~(t54));
    t49 = (t47 & t50);
    t53 = (t52 & t55);
    t56 = (~(t49));
    t57 = (~(t53));
    t63 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t63 & t56);
    t64 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t64 & t57);
    t65 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t65 & t56);
    t66 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t66 & t57);
    goto LAB59;

LAB62:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(57, ng0);

LAB67:    xsi_set_current_line(58, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t69, 0, 8);
    xsi_vlog_signed_less(t69, 32, t22, 32, t28, 32);
    memset(t62, 0, 8);
    t21 = (t69 + 4);
    t32 = *((unsigned int *)t21);
    t33 = (~(t32));
    t34 = *((unsigned int *)t69);
    t37 = (t34 & t33);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t21) != 0)
        goto LAB70;

LAB71:    t30 = (t62 + 4);
    t39 = *((unsigned int *)t62);
    t40 = *((unsigned int *)t30);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB72;

LAB73:    t42 = *((unsigned int *)t62);
    t43 = (~(t42));
    t46 = *((unsigned int *)t30);
    t47 = (t43 || t46);
    if (t47 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t30) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t62) > 0)
        goto LAB78;

LAB79:    memcpy(t31, t36, 8);

LAB80:    t44 = (t0 + 1768);
    xsi_vlogvar_assign_value(t44, t31, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB66;

LAB68:    *((unsigned int *)t62) = 1;
    goto LAB71;

LAB70:    t29 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB71;

LAB72:    t35 = ((char*)((ng8)));
    goto LAB73;

LAB74:    t36 = ((char*)((ng2)));
    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t31, 32, t35, 32, t36, 32);
    goto LAB80;

LAB78:    memcpy(t31, t35, 8);
    goto LAB80;

LAB83:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(60, ng0);

LAB88:    xsi_set_current_line(61, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t67, 0, 8);
    t21 = (t22 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB90;

LAB89:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB90;

LAB93:    if (*((unsigned int *)t22) < *((unsigned int *)t28))
        goto LAB91;

LAB92:    memset(t62, 0, 8);
    t35 = (t67 + 4);
    t32 = *((unsigned int *)t35);
    t33 = (~(t32));
    t34 = *((unsigned int *)t67);
    t37 = (t34 & t33);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t35) != 0)
        goto LAB96;

LAB97:    t44 = (t62 + 4);
    t39 = *((unsigned int *)t62);
    t40 = *((unsigned int *)t44);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB98;

LAB99:    t42 = *((unsigned int *)t62);
    t43 = (~(t42));
    t46 = *((unsigned int *)t44);
    t47 = (t43 || t46);
    if (t47 > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t44) > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t62) > 0)
        goto LAB104;

LAB105:    memcpy(t31, t58, 8);

LAB106:    t70 = (t0 + 1768);
    xsi_vlogvar_assign_value(t70, t31, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB87;

LAB90:    t30 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB92;

LAB91:    *((unsigned int *)t67) = 1;
    goto LAB92;

LAB94:    *((unsigned int *)t62) = 1;
    goto LAB97;

LAB96:    t36 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB97;

LAB98:    t45 = ((char*)((ng8)));
    goto LAB99;

LAB100:    t58 = ((char*)((ng2)));
    goto LAB101;

LAB102:    xsi_vlog_unsigned_bit_combine(t31, 32, t45, 32, t58, 32);
    goto LAB106;

LAB104:    memcpy(t31, t45, 8);
    goto LAB106;

LAB109:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(63, ng0);

LAB114:    xsi_set_current_line(64, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB113;

}


extern void work_m_00000000004013164380_0886308060_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000004013164380_0886308060", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000004013164380_0886308060.didat");
	xsi_register_executes(pe);
}
