/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright(c) 2009-2012  Realtek Corporation.*/

#ifndef __RTL92CE_TABLE__H_
#define __RTL92CE_TABLE__H_

#include <linux/types.h>

#define PHY_REG_2TARRAY_LENGTH	374
extern u32 RTL8192CEPHY_REG_2TARRAY[PHY_REG_2TARRAY_LENGTH];
#define PHY_REG_1TARRAY_LENGTH	374
extern u32 RTL8192CEPHY_REG_1TARRAY[PHY_REG_1TARRAY_LENGTH];
#define PHY_REG_ARRAY_PGLENGTH	192
extern u32 RTL8192CEPHY_REG_ARRAY_PG[PHY_REG_ARRAY_PGLENGTH];
#define RADIOA_2TARRAYLENGTH	282
extern u32 RTL8192CERADIOA_2TARRAY[RADIOA_2TARRAYLENGTH];
#define RADIOB_2TARRAYLENGTH	78
extern u32 RTL8192CE_RADIOB_2TARRAY[RADIOB_2TARRAYLENGTH];
#define RADIOA_1TARRAYLENGTH	282
extern u32 RTL8192CE_RADIOA_1TARRAY[RADIOA_1TARRAYLENGTH];
#define RADIOB_1TARRAYLENGTH	1
extern u32 RTL8192CE_RADIOB_1TARRAY[RADIOB_1TARRAYLENGTH];
#define MAC_2T_ARRAYLENGTH	162
extern u32 RTL8192CEMAC_2T_ARRAY[MAC_2T_ARRAYLENGTH];
#define AGCTAB_2TARRAYLENGTH	320
extern u32 RTL8192CEAGCTAB_2TARRAY[AGCTAB_2TARRAYLENGTH];
#define AGCTAB_1TARRAYLENGTH	320
extern u32 RTL8192CEAGCTAB_1TARRAY[AGCTAB_1TARRAYLENGTH];

#endif
