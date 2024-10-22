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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000076747361_1957175458_init();
    work_m_00000000004232419992_4006405310_init();
    work_m_00000000001080624320_0553377315_init();
    work_m_00000000001586820028_1478518036_init();
    work_m_00000000002245100168_1621229167_init();
    work_m_00000000001431915515_1579609468_init();
    work_m_00000000003459981883_2580272168_init();
    work_m_00000000000405372073_0791106946_init();
    work_m_00000000004013164380_0886308060_init();
    work_m_00000000001781612031_2042706489_init();
    work_m_00000000004197381358_2534431770_init();
    work_m_00000000001447489826_0570219952_init();
    work_m_00000000003417411598_0705948429_init();
    work_m_00000000001077247757_1560564125_init();
    work_m_00000000002960952232_3975733304_init();
    work_m_00000000002818842253_1785898336_init();
    work_m_00000000003235774960_3701351626_init();
    work_m_00000000002661879377_3508565487_init();
    work_m_00000000002385021718_0156190743_init();
    work_m_00000000000056312757_0053799672_init();
    work_m_00000000001839928515_3877310806_init();
    work_m_00000000002148573628_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002148573628_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
