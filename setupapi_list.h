/* this is not complette set, only few used used functions */
SETUPAPI_FUNC(HINF, SetupOpenInfFileA, (PCSTR FileName, PCSTR InfClass, DWORD InfStyle, PUINT ErrorLine))
SETUPAPI_FUNC(VOID, SetupCloseInfFile, (HINF InfHandle))
SETUPAPI_FUNC(BOOL, SetupDiBuildDriverInfoList, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, DWORD DriverType))
SETUPAPI_FUNC(BOOL, SetupDiDestroyDeviceInfoList, (HDEVINFO DeviceInfoSet))
SETUPAPI_FUNC(BOOL, SetupDiDestroyDriverInfoList, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, DWORD DriverType))
SETUPAPI_FUNC(BOOL, SetupDiEnumDeviceInfo, (HDEVINFO DeviceInfoSet, DWORD MemberIndex, PSP_DEVINFO_DATA DeviceInfoData))
SETUPAPI_FUNC(BOOL, SetupDiEnumDriverInfoA, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, DWORD DriverType, DWORD MemberIndex, PSP_DRVINFO_DATA_A DriverInfoData))
SETUPAPI_FUNC(HDEVINFO, SetupDiGetClassDevsA, (const GUID *ClassGuid, PCSTR Enumerator, HWND hwndParent, DWORD Flags))
SETUPAPI_FUNC(BOOL, SetupDiGetDeviceInstallParamsA, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, PSP_DEVINSTALL_PARAMS_A DeviceInstallParams))
SETUPAPI_FUNC(BOOL, SetupDiGetDeviceRegistryPropertyA, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, DWORD Property, PDWORD PropertyRegDataType, PBYTE PropertyBuffer, DWORD PropertyBufferSize, PDWORD RequiredSize))
SETUPAPI_FUNC(BOOL, SetupDiGetDriverInfoDetailA, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, PSP_DRVINFO_DATA_A DriverInfoData, PSP_DRVINFO_DETAIL_DATA_A DriverInfoDetailData, DWORD DriverInfoDetailDataSize, PDWORD RequiredSize))
SETUPAPI_FUNC(BOOL, SetupDiInstallDevice, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData))
SETUPAPI_FUNC(BOOL, SetupDiSetDeviceInstallParamsA, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, PSP_DEVINSTALL_PARAMS_A DeviceInstallParams))
SETUPAPI_FUNC(BOOL, SetupDiSetDeviceRegistryPropertyA, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, DWORD Property, const BYTE *PropertyBuffer, DWORD PropertyBufferSize))
SETUPAPI_FUNC(BOOL, SetupDiSetSelectedDriverA, (HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, PSP_DRVINFO_DATA_A DriverInfoData))
