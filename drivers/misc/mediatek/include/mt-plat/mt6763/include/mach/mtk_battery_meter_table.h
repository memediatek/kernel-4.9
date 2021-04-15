/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R 24000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R 61900
#endif

#define RBAT_PULL_UP_VOLT 2800

/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
struct BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
};

struct R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
};

enum PROFILE_TEMPERATURE { T1_0C, T2_25C, T3_50C };

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 68237}, {-15, 53650}, {-10, 42506}, {-5, 33892}, {0, 27219},
	{5, 22021},   {10, 17926},  {15, 14674},  {20, 12081}, {25, 10000},
	{30, 8315},   {35, 6948},   {40, 5834},   {45, 4917},  {50, 4161},
	{55, 3535},   {60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 483954}, {-15, 360850}, {-10, 271697}, {-5, 206463}, {0, 158214},
	{5, 122259},   {10, 95227},   {15, 74730},   {20, 59065},  {25, 47000},
	{30, 37643},   {35, 30334},   {40, 24591},   {45, 20048},  {50, 16433},
	{55, 13539},   {60, 11210}
};
#endif

/* T0 -10C */
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
	{0, 4303},   {6, 4281},   {13, 4261},  {19, 4240},  {26, 4217},
	{32, 4194},  {39, 4169},  {45, 4145},  {52, 4117},  {55, 4088},
	{61, 4068},  {68, 4047},  {74, 4019},  {81, 3997},  {87, 3981},
	{94, 3967},  {100, 3956}, {107, 3942}, {113, 3929}, {119, 3913},
	{126, 3895}, {132, 3880}, {139, 3869}, {145, 3857}, {152, 3848},
	{158, 3839}, {165, 3830}, {168, 3823}, {174, 3818}, {181, 3811},
	{187, 3806}, {194, 3800}, {200, 3796}, {207, 3791}, {213, 3787},
	{219, 3781}, {226, 3775}, {232, 3770}, {239, 3760}, {245, 3752},
	{252, 3742}, {258, 3731}, {265, 3721}, {271, 3713}, {278, 3704},
	{281, 3698}, {287, 3688}, {294, 3665}, {300, 3613}, {307, 3526},
	{313, 3466}, {313, 3444}, {316, 3424}, {316, 3404}, {320, 3381},
	{320, 3357}, {320, 3332}, {320, 3310}, {320, 3291}, {323, 3274},
	{323, 3259}, {323, 3245}, {323, 3234}, {323, 3221}, {323, 3212},
	{323, 3204}, {323, 3193}, {323, 3186}, {323, 3179}, {323, 3168},
	{323, 3162}, {323, 3157}, {323, 3151}, {323, 3143}, {323, 3133},
	{323, 3125}, {323, 3125}, {323, 3125}, {323, 3125}, {323, 3125},
	{323, 3125}, {323, 3125},
};

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
	{0, 4316},   {3, 4283},   {5, 4244},   {7, 4210},   {10, 4185},
	{12, 4164},  {15, 4144},  {18, 4128},  {21, 4109},  {22, 4093},
	{25, 4080},  {27, 4069},  {30, 4047},  {33, 4023},  {36, 4003},
	{37, 3989},  {40, 3977},  {42, 3967},  {45, 3955},  {48, 3940},
	{49, 3923},  {52, 3907},  {55, 3891},  {58, 3877},  {60, 3864},
	{63, 3855},  {64, 3846},  {67, 3837},  {70, 3831},  {73, 3823},
	{75, 3815},  {78, 3811},  {79, 3804},  {82, 3799},  {85, 3794},
	{88, 3790},  {90, 3785},  {92, 3782},  {95, 3778},  {97, 3773},
	{100, 3768}, {103, 3761}, {106, 3753}, {107, 3742}, {110, 3727},
	{112, 3712}, {115, 3704}, {118, 3701}, {119, 3698}, {122, 3692},
	{125, 3680}, {127, 3625}, {130, 3528}, {133, 3472}, {134, 3403},
	{136, 3323}, {137, 3267}, {137, 3230}, {137, 3203}, {137, 3180},
	{137, 3157}, {137, 3141}, {137, 3124}, {137, 3109}, {137, 3096},
	{137, 3084}, {137, 3079}, {137, 3067}, {137, 3058}, {137, 3047},
	{137, 3041}, {137, 3032}, {137, 3029}, {137, 3018}, {137, 3008},
	{137, 3002}, {137, 3003}, {137, 2995}, {137, 2985}, {137, 2983},
	{137, 2979}, {137, 2967},
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
	{0, 4317},   {2, 4292},   {3, 4270},   {5, 4250},   {8, 4231},
	{9, 4213},   {11, 4195},  {13, 4176},  {14, 4159},  {16, 4143},
	{18, 4125},  {20, 4110},  {22, 4093},  {24, 4077},  {25, 4061},
	{27, 4047},  {29, 4030},  {32, 4014},  {33, 4001},  {35, 3988},
	{37, 3976},  {38, 3962},  {40, 3951},  {42, 3935},  {43, 3916},
	{46, 3897},  {48, 3881},  {49, 3869},  {51, 3859},  {53, 3849},
	{54, 3840},  {57, 3835},  {59, 3827},  {60, 3820},  {62, 3813},
	{64, 3807},  {65, 3803},  {67, 3797},  {70, 3790},  {71, 3786},
	{73, 3782},  {75, 3777},  {76, 3770},  {78, 3763},  {80, 3755},
	{83, 3745},  {84, 3734},  {86, 3717},  {88, 3699},  {89, 3692},
	{91, 3690},  {93, 3689},  {95, 3688},  {97, 3676},  {99, 3623},
	{100, 3548}, {102, 3500}, {104, 3482}, {105, 3442}, {108, 3323},
	{109, 3204}, {109, 3162}, {109, 3128}, {109, 3098}, {109, 3073},
	{110, 3053}, {110, 3036}, {110, 3023}, {110, 3012}, {110, 2998},
	{110, 2987}, {110, 2978}, {110, 2971}, {110, 2963}, {110, 2958},
	{110, 2956}, {110, 2953}, {110, 2948}, {110, 2940}, {110, 2934},
	{110, 2929}, {110, 2926},
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
	{0, 4331},   {2, 4305},   {3, 4284},   {5, 4265},   {7, 4244},
	{8, 4225},   {10, 4206},  {12, 4188},  {13, 4170},  {15, 4153},
	{17, 4135},  {18, 4119},  {20, 4102},  {22, 4085},  {24, 4069},
	{26, 4054},  {28, 4038},  {30, 4023},  {31, 4010},  {33, 3996},
	{35, 3984},  {36, 3970},  {38, 3958},  {40, 3947},  {41, 3934},
	{43, 3921},  {45, 3904},  {46, 3884},  {48, 3868},  {50, 3857},
	{51, 3848},  {53, 3838},  {55, 3832},  {57, 3824},  {58, 3817},
	{60, 3811},  {62, 3806},  {63, 3800},  {65, 3794},  {67, 3790},
	{68, 3784},  {70, 3777},  {72, 3763},  {73, 3758},  {76, 3750},
	{78, 3742},  {79, 3733},  {81, 3723},  {83, 3709},  {84, 3694},
	{86, 3678},  {88, 3676},  {89, 3675},  {91, 3674},  {93, 3669},
	{94, 3625},  {96, 3547},  {98, 3495},  {100, 3458}, {101, 3331},
	{102, 3140}, {103, 3078}, {103, 3033}, {103, 3001}, {103, 2980},
	{103, 2960}, {103, 2944}, {103, 2932}, {103, 2921}, {103, 2913},
	{103, 2903}, {103, 2899}, {103, 2889}, {103, 2889}, {103, 2889},
	{103, 2889}, {103, 2889}, {103, 2889}, {103, 2889}, {103, 2889},
	{103, 2889}, {103, 2889},
};

/* battery profile for actual temperature. The size should be the same as T1,
 * T2
 * and T3
 */
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}
};

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = {
	{408, 4303},  {408, 4281},  {415, 4261},  {425, 4240},  {430, 4217},
	{440, 4194},  {463, 4169},  {490, 4145},  {525, 4117},  {573, 4088},
	{615, 4068},  {650, 4047},  {675, 4019},  {685, 3997},  {705, 3981},
	{713, 3967},  {720, 3956},  {733, 3942},  {728, 3929},  {738, 3913},
	{725, 3895},  {735, 3880},  {745, 3869},  {748, 3857},  {760, 3848},
	{773, 3839},  {783, 3830},  {803, 3823},  {820, 3818},  {835, 3811},
	{863, 3806},  {888, 3800},  {903, 3796},  {925, 3791},  {955, 3787},
	{975, 3781},  {1000, 3775}, {1035, 3770}, {1058, 3760}, {1090, 3752},
	{1105, 3742}, {1135, 3731}, {1168, 3721}, {1210, 3713}, {1255, 3704},
	{1345, 3698}, {1430, 3688}, {1518, 3665}, {1570, 3613}, {1618, 3526},
	{1668, 3466}, {1613, 3444}, {1563, 3424}, {1510, 3404}, {1460, 3381},
	{1400, 3357}, {1333, 3332}, {1283, 3310}, {1233, 3291}, {1198, 3274},
	{1155, 3259}, {1128, 3245}, {1093, 3234}, {1075, 3221}, {1053, 3212},
	{1023, 3204}, {1018, 3193}, {1005, 3186}, {978, 3179},  {960, 3168},
	{940, 3162},  {895, 3157},  {890, 3151},  {863, 3143},  {925, 3133},
	{893, 3125},  {893, 3125},  {893, 3125},  {893, 3125},  {893, 3125},
	{893, 3125},  {893, 3125}
};

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = {
	{258, 4316},  {258, 4283},  {278, 4244},  {303, 4210},  {333, 4185},
	{343, 4164},  {350, 4144},  {365, 4128},  {370, 4109},  {370, 4093},
	{380, 4080},  {403, 4069},  {395, 4047},  {403, 4023},  {403, 4003},
	{413, 3989},  {418, 3977},  {420, 3967},  {423, 3955},  {415, 3940},
	{410, 3923},  {400, 3907},  {393, 3891},  {393, 3877},  {388, 3864},
	{395, 3855},  {403, 3846},  {405, 3837},  {415, 3831},  {425, 3823},
	{430, 3815},  {443, 3811},  {450, 3804},  {465, 3799},  {475, 3794},
	{483, 3790},  {490, 3785},  {503, 3782},  {520, 3778},  {533, 3773},
	{545, 3768},  {563, 3761},  {588, 3753},  {600, 3742},  {608, 3727},
	{615, 3712},  {635, 3704},  {670, 3701},  {710, 3698},  {765, 3692},
	{840, 3680},  {880, 3625},  {915, 3528},  {1080, 3472}, {1323, 3403},
	{1315, 3323}, {1180, 3267}, {1080, 3230}, {1010, 3203}, {958, 3180},
	{925, 3157},  {888, 3141},  {860, 3124},  {810, 3109},  {788, 3096},
	{765, 3084},  {700, 3079},  {745, 3067},  {680, 3058},  {685, 3047},
	{650, 3041},  {683, 3032},  {615, 3029},  {643, 3018},  {660, 3008},
	{635, 3002},  {530, 3003},  {640, 2995},  {595, 2985},  {535, 2983},
	{463, 2979},  {600, 2967}
};

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = {
	{173, 4317},  {173, 4292}, {175, 4270}, {170, 4250}, {173, 4231},
	{173, 4213},  {178, 4195}, {173, 4176}, {183, 4159}, {193, 4143},
	{193, 4125},  {203, 4110}, {205, 4093}, {208, 4077}, {205, 4061},
	{213, 4047},  {215, 4030}, {223, 4014}, {230, 4001}, {233, 3988},
	{240, 3976},  {243, 3962}, {248, 3951}, {243, 3935}, {223, 3916},
	{203, 3897},  {195, 3881}, {188, 3869}, {188, 3859}, {185, 3849},
	{183, 3840},  {195, 3835}, {198, 3827}, {195, 3820}, {198, 3813},
	{200, 3807},  {208, 3803}, {205, 3797}, {205, 3790}, {205, 3786},
	{210, 3782},  {213, 3777}, {208, 3770}, {203, 3763}, {198, 3755},
	{195, 3745},  {198, 3734}, {193, 3717}, {193, 3699}, {193, 3692},
	{195, 3690},  {205, 3689}, {220, 3688}, {238, 3676}, {238, 3623},
	{255, 3548},  {293, 3500}, {330, 3482}, {390, 3442}, {485, 3323},
	{1018, 3204}, {925, 3162}, {838, 3128}, {748, 3098}, {720, 3073},
	{668, 3053},  {608, 3036}, {560, 3023}, {550, 3012}, {558, 2998},
	{538, 2987},  {515, 2978}, {485, 2971}, {458, 2963}, {455, 2958},
	{403, 2956},  {398, 2953}, {373, 2948}, {373, 2940}, {408, 2934},
	{420, 2929},  {335, 2926}
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = {
	{123, 4331}, {123, 4305}, {128, 4284}, {130, 4265}, {130, 4244},
	{130, 4225}, {128, 4206}, {125, 4188}, {130, 4170}, {133, 4153},
	{133, 4135}, {138, 4119}, {138, 4102}, {140, 4085}, {140, 4069},
	{143, 4054}, {140, 4038}, {143, 4023}, {148, 4010}, {153, 3996},
	{155, 3984}, {155, 3970}, {165, 3958}, {175, 3947}, {175, 3934},
	{178, 3921}, {170, 3904}, {148, 3884}, {135, 3868}, {135, 3857},
	{133, 3848}, {133, 3838}, {135, 3832}, {135, 3824}, {135, 3817},
	{143, 3811}, {145, 3806}, {148, 3800}, {145, 3794}, {153, 3790},
	{150, 3784}, {150, 3777}, {133, 3763}, {143, 3758}, {140, 3750},
	{138, 3742}, {135, 3733}, {135, 3723}, {133, 3709}, {133, 3694},
	{130, 3678}, {130, 3676}, {138, 3675}, {148, 3674}, {160, 3669},
	{158, 3625}, {170, 3547}, {208, 3495}, {220, 3458}, {265, 3331},
	{855, 3140}, {725, 3078}, {600, 3033}, {528, 3001}, {460, 2980},
	{400, 2960}, {380, 2944}, {355, 2932}, {315, 2921}, {303, 2913},
	{308, 2903}, {255, 2899}, {273, 2889}, {273, 2889}, {273, 2889},
	{273, 2889}, {273, 2889}, {273, 2889}, {273, 2889}, {273, 2889},
	{273, 2889}, {273, 2889}
};

/* r-table profile for actual temperature. The size should be the same as T1,
 * T2
 * and T3
 */
R_PROFILE_STRUCT r_profile_temperature[] = {
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
	{0, 0}
};

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif
