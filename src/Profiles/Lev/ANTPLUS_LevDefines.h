#ifndef ANTPLUS_LEVPROFILEDEFINES_h
#define ANTPLUS_LEVPROFILEDEFINES_h

#define ANTPLUS_LEV_DEVICETYPE 20

#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_STATE_UNKNOWN        0
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_STATE_COLD           1
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_STATE_COLDWARM       2
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_STATE_WARM           3
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_STATE_WARMHOT        4
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_STATE_HOT            5
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_ALERT_NOALERT        0
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_ALERT_OVERHEATALERT  1

#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TRAVELMODESTATE_OFF                   0

#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_SYSTEMSTATE_TURNSIGNALRIGHT           (1 << 0)
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_SYSTEMSTATE_TURNSIGNALLEFT            (1 << 1)
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_SYSTEMSTATE_LIGHTBEAM                 (1 << 2)
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_SYSTEMSTATE_LIGHTONOFF                (1 << 3)
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_SYSTEMSTATE_MANUALTHROTTLE            (1 << 4)

#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_GEARSTATE_CURRENTGEAR_NOGEAR          0
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_GEARSTATE_MANUALAUTOSTATE_AUTOMATIC   0
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_GEARSTATE_MANUALAUTOSTATE_MANUAL      1
#define ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_GEARSTATE_GEAREXIST_AVAILABLE         1

#endif // ANTPLUS_BICYCLESPEEDPROFILEDEFINES_h
