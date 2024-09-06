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
static const char *ng0 = "C:/Users/Hihiczx/Documents/ISE Project/P1_L1_BlockChecker/BlockChecker.v";
static int ng1[] = {0, 0, 0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {98, 0};
static int ng5[] = {66, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {101, 0};
static int ng8[] = {69, 0};
static unsigned int ng9[] = {6U, 0U};
static int ng10[] = {32, 0};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {2U, 0U};
static int ng13[] = {103, 0};
static int ng14[] = {71, 0};
static unsigned int ng15[] = {3U, 0U};
static int ng16[] = {105, 0};
static int ng17[] = {73, 0};
static unsigned int ng18[] = {4U, 0U};
static int ng19[] = {110, 0};
static int ng20[] = {78, 0};
static unsigned int ng21[] = {5U, 0U};
static int ng22[] = {1, 0, 0, 0};
static unsigned int ng23[] = {7U, 0U};
static int ng24[] = {100, 0};
static int ng25[] = {68, 0};
static unsigned int ng26[] = {8U, 0U};
static int ng27[] = {1, 0};



static void Always_43_0(char *t0)
{
    char t14[8];
    char t25[8];
    char t40[8];
    char t56[8];
    char t64[8];
    char t100[16];
    char t101[16];
    char t102[16];
    char t103[16];
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
    int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
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
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3984);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
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
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng26)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB29;

LAB30:
LAB31:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 33, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(50, ng0);

LAB32:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    t16 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB36;

LAB33:    if (t21 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t14) = 1;

LAB36:    memset(t25, 0, 8);
    t26 = (t14 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t26) != 0)
        goto LAB39;

LAB40:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t33);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB41;

LAB42:    memcpy(t64, t25, 8);

LAB43:    t92 = (t64 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB62;

LAB59:    if (t21 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t14) = 1;

LAB62:    memset(t25, 0, 8);
    t15 = (t14 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t15) != 0)
        goto LAB65;

LAB66:    t24 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t24);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB67;

LAB68:    memcpy(t64, t25, 8);

LAB69:    t70 = (t64 + 4);
    t93 = *((unsigned int *)t70);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB88;

LAB85:    if (t21 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t14) = 1;

LAB88:    t15 = (t14 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(57, ng0);

LAB93:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB91:
LAB83:
LAB57:    goto LAB31;

LAB13:    xsi_set_current_line(61, ng0);

LAB94:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB98;

LAB95:    if (t21 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t14) = 1;

LAB98:    memset(t25, 0, 8);
    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t16) != 0)
        goto LAB101;

LAB102:    t26 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t26);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB103;

LAB104:    memcpy(t64, t25, 8);

LAB105:    t78 = (t64 + 4);
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB124;

LAB121:    if (t21 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t14) = 1;

LAB124:    t15 = (t14 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(66, ng0);

LAB129:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB127:
LAB119:    goto LAB31;

LAB15:    xsi_set_current_line(70, ng0);

LAB130:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng13)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB134;

LAB131:    if (t21 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t14) = 1;

LAB134:    memset(t25, 0, 8);
    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t16) != 0)
        goto LAB137;

LAB138:    t26 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t26);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB139;

LAB140:    memcpy(t64, t25, 8);

LAB141:    t78 = (t64 + 4);
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB160;

LAB157:    if (t21 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t14) = 1;

LAB160:    t15 = (t14 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(75, ng0);

LAB165:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB163:
LAB155:    goto LAB31;

LAB17:    xsi_set_current_line(79, ng0);

LAB166:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng16)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB170;

LAB167:    if (t21 != 0)
        goto LAB169;

LAB168:    *((unsigned int *)t14) = 1;

LAB170:    memset(t25, 0, 8);
    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t16) != 0)
        goto LAB173;

LAB174:    t26 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t26);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB175;

LAB176:    memcpy(t64, t25, 8);

LAB177:    t78 = (t64 + 4);
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB189;

LAB190:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB196;

LAB193:    if (t21 != 0)
        goto LAB195;

LAB194:    *((unsigned int *)t14) = 1;

LAB196:    t15 = (t14 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB197;

LAB198:    xsi_set_current_line(84, ng0);

LAB201:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB199:
LAB191:    goto LAB31;

LAB19:    xsi_set_current_line(88, ng0);

LAB202:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng19)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB206;

LAB203:    if (t21 != 0)
        goto LAB205;

LAB204:    *((unsigned int *)t14) = 1;

LAB206:    memset(t25, 0, 8);
    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t16) != 0)
        goto LAB209;

LAB210:    t26 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t26);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB211;

LAB212:    memcpy(t64, t25, 8);

LAB213:    t78 = (t64 + 4);
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB225;

LAB226:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB236;

LAB233:    if (t21 != 0)
        goto LAB235;

LAB234:    *((unsigned int *)t14) = 1;

LAB236:    t15 = (t14 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB237;

LAB238:    xsi_set_current_line(96, ng0);

LAB241:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB239:
LAB227:    goto LAB31;

LAB21:    xsi_set_current_line(100, ng0);

LAB242:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB246;

LAB243:    if (t21 != 0)
        goto LAB245;

LAB244:    *((unsigned int *)t14) = 1;

LAB246:    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB247;

LAB248:    xsi_set_current_line(103, ng0);

LAB251:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng22)));
    xsi_vlog_unsigned_minus(t100, 33, t5, 33, t11, 32);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t100, 0, 0, 33, 0LL);

LAB249:    goto LAB31;

LAB23:    xsi_set_current_line(108, ng0);

LAB252:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng19)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB256;

LAB253:    if (t21 != 0)
        goto LAB255;

LAB254:    *((unsigned int *)t14) = 1;

LAB256:    memset(t25, 0, 8);
    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB257;

LAB258:    if (*((unsigned int *)t16) != 0)
        goto LAB259;

LAB260:    t26 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t26);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB261;

LAB262:    memcpy(t64, t25, 8);

LAB263:    t78 = (t64 + 4);
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB275;

LAB276:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB282;

LAB279:    if (t21 != 0)
        goto LAB281;

LAB280:    *((unsigned int *)t14) = 1;

LAB282:    t15 = (t14 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB283;

LAB284:    xsi_set_current_line(113, ng0);

LAB287:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB285:
LAB277:    goto LAB31;

LAB25:    xsi_set_current_line(117, ng0);

LAB288:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng24)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB292;

LAB289:    if (t21 != 0)
        goto LAB291;

LAB290:    *((unsigned int *)t14) = 1;

LAB292:    memset(t25, 0, 8);
    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB293;

LAB294:    if (*((unsigned int *)t16) != 0)
        goto LAB295;

LAB296:    t26 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t26);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB297;

LAB298:    memcpy(t64, t25, 8);

LAB299:    t78 = (t64 + 4);
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB311;

LAB312:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB322;

LAB319:    if (t21 != 0)
        goto LAB321;

LAB320:    *((unsigned int *)t14) = 1;

LAB322:    t15 = (t14 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB323;

LAB324:    xsi_set_current_line(126, ng0);

LAB327:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB325:
LAB313:    goto LAB31;

LAB27:    xsi_set_current_line(130, ng0);

LAB328:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB332;

LAB329:    if (t21 != 0)
        goto LAB331;

LAB330:    *((unsigned int *)t14) = 1;

LAB332:    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB333;

LAB334:    xsi_set_current_line(134, ng0);

LAB337:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB338;

LAB339:
LAB340:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB335:    goto LAB31;

LAB29:    xsi_set_current_line(142, ng0);

LAB342:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB346;

LAB343:    if (t21 != 0)
        goto LAB345;

LAB344:    *((unsigned int *)t14) = 1;

LAB346:    t16 = (t14 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB347;

LAB348:    xsi_set_current_line(145, ng0);

LAB351:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB349:    goto LAB31;

LAB35:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t25) = 1;
    goto LAB40;

LAB39:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB40;

LAB41:    t38 = (t0 + 1368U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng5)));
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t39);
    t44 = *((unsigned int *)t38);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB47;

LAB44:    if (t52 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t40) = 1;

LAB47:    memset(t56, 0, 8);
    t57 = (t40 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t57) != 0)
        goto LAB50;

LAB51:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = (t25 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB46:    t55 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t56) = 1;
    goto LAB51;

LAB50:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB51;

LAB52:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t25 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t79);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t90 & t88);
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    goto LAB54;

LAB55:    xsi_set_current_line(51, ng0);

LAB58:    xsi_set_current_line(52, ng0);
    t98 = ((char*)((ng6)));
    t99 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 4, 0LL);
    goto LAB57;

LAB61:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t25) = 1;
    goto LAB66;

LAB65:    t16 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB66;

LAB67:    t26 = (t0 + 1368U);
    t32 = *((char **)t26);
    t26 = ((char*)((ng8)));
    memset(t40, 0, 8);
    t33 = (t32 + 4);
    t38 = (t26 + 4);
    t43 = *((unsigned int *)t32);
    t44 = *((unsigned int *)t26);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t38);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t33);
    t51 = *((unsigned int *)t38);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB73;

LAB70:    if (t52 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t40) = 1;

LAB73:    memset(t56, 0, 8);
    t41 = (t40 + 4);
    t58 = *((unsigned int *)t41);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t41) != 0)
        goto LAB76;

LAB77:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t55 = (t25 + 4);
    t57 = (t56 + 4);
    t63 = (t64 + 4);
    t71 = *((unsigned int *)t55);
    t72 = *((unsigned int *)t57);
    t73 = (t71 | t72);
    *((unsigned int *)t63) = t73;
    t74 = *((unsigned int *)t63);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB69;

LAB72:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t56) = 1;
    goto LAB77;

LAB76:    t42 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB77;

LAB78:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t63);
    *((unsigned int *)t64) = (t76 | t77);
    t68 = (t25 + 4);
    t69 = (t56 + 4);
    t80 = *((unsigned int *)t68);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t13 = (t82 & t81);
    t84 = *((unsigned int *)t69);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t83 = (t86 & t85);
    t88 = (~(t13));
    t89 = (~(t83));
    t90 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t90 & t88);
    t91 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t91 & t89);
    goto LAB80;

LAB81:    xsi_set_current_line(53, ng0);

LAB84:    xsi_set_current_line(54, ng0);
    t78 = ((char*)((ng9)));
    t79 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t79, t78, 0, 0, 4, 0LL);
    goto LAB83;

LAB87:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(55, ng0);

LAB92:    xsi_set_current_line(56, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 4, 0LL);
    goto LAB91;

LAB97:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t25) = 1;
    goto LAB102;

LAB101:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB102;

LAB103:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng8)));
    memset(t40, 0, 8);
    t38 = (t33 + 4);
    t39 = (t32 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t32);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t39);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB109;

LAB106:    if (t52 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t40) = 1;

LAB109:    memset(t56, 0, 8);
    t42 = (t40 + 4);
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t42) != 0)
        goto LAB112;

LAB113:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t57 = (t25 + 4);
    t63 = (t56 + 4);
    t68 = (t64 + 4);
    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t68);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB105;

LAB108:    t41 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t56) = 1;
    goto LAB113;

LAB112:    t55 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB113;

LAB114:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t64) = (t76 | t77);
    t69 = (t25 + 4);
    t70 = (t56 + 4);
    t80 = *((unsigned int *)t69);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t70);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    goto LAB116;

LAB117:    xsi_set_current_line(62, ng0);

LAB120:    xsi_set_current_line(63, ng0);
    t79 = ((char*)((ng12)));
    t92 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t92, t79, 0, 0, 4, 0LL);
    goto LAB119;

LAB123:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(64, ng0);

LAB128:    xsi_set_current_line(65, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 4, 0LL);
    goto LAB127;

LAB133:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB134;

LAB135:    *((unsigned int *)t25) = 1;
    goto LAB138;

LAB137:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB138;

LAB139:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng14)));
    memset(t40, 0, 8);
    t38 = (t33 + 4);
    t39 = (t32 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t32);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t39);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB145;

LAB142:    if (t52 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t40) = 1;

LAB145:    memset(t56, 0, 8);
    t42 = (t40 + 4);
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t42) != 0)
        goto LAB148;

LAB149:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t57 = (t25 + 4);
    t63 = (t56 + 4);
    t68 = (t64 + 4);
    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t68);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB150;

LAB151:
LAB152:    goto LAB141;

LAB144:    t41 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t56) = 1;
    goto LAB149;

LAB148:    t55 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB149;

LAB150:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t64) = (t76 | t77);
    t69 = (t25 + 4);
    t70 = (t56 + 4);
    t80 = *((unsigned int *)t69);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t70);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    goto LAB152;

LAB153:    xsi_set_current_line(71, ng0);

LAB156:    xsi_set_current_line(72, ng0);
    t79 = ((char*)((ng15)));
    t92 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t92, t79, 0, 0, 4, 0LL);
    goto LAB155;

LAB159:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(73, ng0);

LAB164:    xsi_set_current_line(74, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 4, 0LL);
    goto LAB163;

LAB169:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB170;

LAB171:    *((unsigned int *)t25) = 1;
    goto LAB174;

LAB173:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB174;

LAB175:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng17)));
    memset(t40, 0, 8);
    t38 = (t33 + 4);
    t39 = (t32 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t32);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t39);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB181;

LAB178:    if (t52 != 0)
        goto LAB180;

LAB179:    *((unsigned int *)t40) = 1;

LAB181:    memset(t56, 0, 8);
    t42 = (t40 + 4);
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB182;

LAB183:    if (*((unsigned int *)t42) != 0)
        goto LAB184;

LAB185:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t57 = (t25 + 4);
    t63 = (t56 + 4);
    t68 = (t64 + 4);
    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t68);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB186;

LAB187:
LAB188:    goto LAB177;

LAB180:    t41 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB181;

LAB182:    *((unsigned int *)t56) = 1;
    goto LAB185;

LAB184:    t55 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB185;

LAB186:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t64) = (t76 | t77);
    t69 = (t25 + 4);
    t70 = (t56 + 4);
    t80 = *((unsigned int *)t69);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t70);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    goto LAB188;

LAB189:    xsi_set_current_line(80, ng0);

LAB192:    xsi_set_current_line(81, ng0);
    t79 = ((char*)((ng18)));
    t92 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t92, t79, 0, 0, 4, 0LL);
    goto LAB191;

LAB195:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB196;

LAB197:    xsi_set_current_line(82, ng0);

LAB200:    xsi_set_current_line(83, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 4, 0LL);
    goto LAB199;

LAB205:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB206;

LAB207:    *((unsigned int *)t25) = 1;
    goto LAB210;

LAB209:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB210;

LAB211:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng20)));
    memset(t40, 0, 8);
    t38 = (t33 + 4);
    t39 = (t32 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t32);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t39);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB217;

LAB214:    if (t52 != 0)
        goto LAB216;

LAB215:    *((unsigned int *)t40) = 1;

LAB217:    memset(t56, 0, 8);
    t42 = (t40 + 4);
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB218;

LAB219:    if (*((unsigned int *)t42) != 0)
        goto LAB220;

LAB221:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t57 = (t25 + 4);
    t63 = (t56 + 4);
    t68 = (t64 + 4);
    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t68);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB222;

LAB223:
LAB224:    goto LAB213;

LAB216:    t41 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB217;

LAB218:    *((unsigned int *)t56) = 1;
    goto LAB221;

LAB220:    t55 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB221;

LAB222:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t64) = (t76 | t77);
    t69 = (t25 + 4);
    t70 = (t56 + 4);
    t80 = *((unsigned int *)t69);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t70);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    goto LAB224;

LAB225:    xsi_set_current_line(89, ng0);

LAB228:    xsi_set_current_line(90, ng0);
    t79 = ((char*)((ng21)));
    t92 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t92, t79, 0, 0, 4, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    xsi_vlogtype_sign_extend(t101, 33, t11, 32);
    xsi_vlog_signed_greatereq(t102, 33, t5, 33, t101, 33);
    t12 = (t102 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t102);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB229;

LAB230:
LAB231:    goto LAB227;

LAB229:    xsi_set_current_line(91, ng0);

LAB232:    xsi_set_current_line(92, ng0);
    t15 = (t0 + 2088);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    t26 = ((char*)((ng22)));
    xsi_vlog_unsigned_add(t103, 33, t24, 33, t26, 32);
    t32 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t32, t103, 0, 0, 33, 0LL);
    goto LAB231;

LAB235:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB236;

LAB237:    xsi_set_current_line(94, ng0);

LAB240:    xsi_set_current_line(95, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 4, 0LL);
    goto LAB239;

LAB245:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB246;

LAB247:    xsi_set_current_line(101, ng0);

LAB250:    xsi_set_current_line(102, ng0);
    t24 = ((char*)((ng2)));
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t24, 0, 0, 4, 0LL);
    goto LAB249;

LAB255:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB256;

LAB257:    *((unsigned int *)t25) = 1;
    goto LAB260;

LAB259:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB260;

LAB261:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng20)));
    memset(t40, 0, 8);
    t38 = (t33 + 4);
    t39 = (t32 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t32);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t39);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB267;

LAB264:    if (t52 != 0)
        goto LAB266;

LAB265:    *((unsigned int *)t40) = 1;

LAB267:    memset(t56, 0, 8);
    t42 = (t40 + 4);
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB268;

LAB269:    if (*((unsigned int *)t42) != 0)
        goto LAB270;

LAB271:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t57 = (t25 + 4);
    t63 = (t56 + 4);
    t68 = (t64 + 4);
    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t68);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB272;

LAB273:
LAB274:    goto LAB263;

LAB266:    t41 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB267;

LAB268:    *((unsigned int *)t56) = 1;
    goto LAB271;

LAB270:    t55 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB271;

LAB272:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t64) = (t76 | t77);
    t69 = (t25 + 4);
    t70 = (t56 + 4);
    t80 = *((unsigned int *)t69);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t70);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    goto LAB274;

LAB275:    xsi_set_current_line(109, ng0);

LAB278:    xsi_set_current_line(110, ng0);
    t79 = ((char*)((ng23)));
    t92 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t92, t79, 0, 0, 4, 0LL);
    goto LAB277;

LAB281:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB282;

LAB283:    xsi_set_current_line(111, ng0);

LAB286:    xsi_set_current_line(112, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 4, 0LL);
    goto LAB285;

LAB291:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB292;

LAB293:    *((unsigned int *)t25) = 1;
    goto LAB296;

LAB295:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB296;

LAB297:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng25)));
    memset(t40, 0, 8);
    t38 = (t33 + 4);
    t39 = (t32 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t32);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t39);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB303;

LAB300:    if (t52 != 0)
        goto LAB302;

LAB301:    *((unsigned int *)t40) = 1;

LAB303:    memset(t56, 0, 8);
    t42 = (t40 + 4);
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB304;

LAB305:    if (*((unsigned int *)t42) != 0)
        goto LAB306;

LAB307:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t57 = (t25 + 4);
    t63 = (t56 + 4);
    t68 = (t64 + 4);
    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t68);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB308;

LAB309:
LAB310:    goto LAB299;

LAB302:    t41 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB303;

LAB304:    *((unsigned int *)t56) = 1;
    goto LAB307;

LAB306:    t55 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB307;

LAB308:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t64) = (t76 | t77);
    t69 = (t25 + 4);
    t70 = (t56 + 4);
    t80 = *((unsigned int *)t69);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t70);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    goto LAB310;

LAB311:    xsi_set_current_line(118, ng0);

LAB314:    xsi_set_current_line(119, ng0);
    t79 = ((char*)((ng26)));
    t92 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t92, t79, 0, 0, 4, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    xsi_vlogtype_sign_extend(t101, 33, t11, 32);
    xsi_vlog_signed_greatereq(t102, 33, t5, 33, t101, 33);
    t12 = (t102 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t102);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB315;

LAB316:
LAB317:    goto LAB313;

LAB315:    xsi_set_current_line(120, ng0);

LAB318:    xsi_set_current_line(121, ng0);
    t15 = (t0 + 2088);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    t26 = ((char*)((ng22)));
    xsi_vlog_unsigned_minus(t103, 33, t24, 33, t26, 32);
    t32 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t32, t103, 0, 0, 33, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB317;

LAB321:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB322;

LAB323:    xsi_set_current_line(124, ng0);

LAB326:    xsi_set_current_line(125, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 4, 0LL);
    goto LAB325;

LAB331:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB332;

LAB333:    xsi_set_current_line(131, ng0);

LAB336:    xsi_set_current_line(132, ng0);
    t24 = ((char*)((ng2)));
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t24, 0, 0, 4, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB335;

LAB338:    xsi_set_current_line(136, ng0);

LAB341:    xsi_set_current_line(137, ng0);
    t12 = (t0 + 2088);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    t24 = ((char*)((ng22)));
    xsi_vlog_unsigned_add(t100, 33, t16, 33, t24, 32);
    t26 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t26, t100, 0, 0, 33, 0LL);
    goto LAB340;

LAB345:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB346;

LAB347:    xsi_set_current_line(143, ng0);

LAB350:    xsi_set_current_line(144, ng0);
    t24 = ((char*)((ng2)));
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t24, 0, 0, 4, 0LL);
    goto LAB349;

}

static void Always_152_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(152, ng0);

LAB5:    xsi_set_current_line(153, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 33, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Cont_158_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t8, 33, t6, 33, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 4096);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 4016);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng27)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}


extern void work_m_00000000003407374280_1075435344_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Always_152_1,(void *)Cont_158_2};
	xsi_register_didat("work_m_00000000003407374280_1075435344", "isim/BlockCheckerTest_isim_beh.exe.sim/work/m_00000000003407374280_1075435344.didat");
	xsi_register_executes(pe);
}
