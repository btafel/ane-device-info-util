/*
 * Copyright (c) 2013 WallWizz
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * game.c
 *
 *  Created on: Oct 13, 2012
 *      Author: caneraltinbasak
 */
#include <bps/bps.h>
#include <bps/deviceinfo.h>
#include <string.h>
#include <stdio.h>
#include "deviceinfoutil.h"

FREObject getCurrentSSID(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[])
{
//    FREObject result;
//    const char* aSSIDStr = "";
//    FRENewObjectFromUTF8(strlen(aSSIDStr) + 1, (const uint8_t*) aSSIDStr, &result);
    return NULL;
}
FREObject getCurrentMACAddress(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[])
{
    FREObject result;
    deviceinfo_details_t *id_details;

    int rc = deviceinfo_get_details(&id_details);
    if (BPS_SUCCESS == rc) {

        fprintf(stderr, "before deviceinfo_details_get_hardware_id\n");
        const char* _aMACStr = deviceinfo_details_get_hardware_id(id_details);
        fprintf(stderr, "after deviceinfo_details_get_hardware_id %s\n", _aMACStr);
        deviceinfo_free_details(&id_details);

        FRENewObjectFromUTF8(strlen(_aMACStr) + 1, (const uint8_t*) _aMACStr, &result);
        return result;

    }

    return NULL;
}
FREObject getCurrentDeviceName(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[])
{
    FREObject result;
    deviceinfo_details_t *id_details;

    int rc = deviceinfo_get_details(&id_details);
    if (BPS_SUCCESS == rc) {
        fprintf(stderr, "before deviceinfo_details_get_device_name\n");
        const char* _aNameStr = deviceinfo_details_get_device_name(id_details);
        fprintf(stderr, "after deviceinfo_details_get_device_name %s\n", _aNameStr);
        deviceinfo_free_details(&id_details);

        FRENewObjectFromUTF8(strlen(_aNameStr) + 1, (const uint8_t*) _aNameStr, &result);
        return result;

    }
    return NULL;
}

FREObject getPIN(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[])
{

    FREObject result;

    deviceinfo_identifying_details_t *id_details;

    int rc = deviceinfo_get_identifying_details(&id_details);
    if (BPS_SUCCESS == rc) {

        fprintf(stderr, "before deviceinfo_identifying_details_get_pin_string\n");
        const char* _aPINStr = deviceinfo_identifying_details_get_pin_string(id_details);
        fprintf(stderr, "after deviceinfo_identifying_details_get_pin 2 %s\n", _aPINStr);
        deviceinfo_free_identifying_details(&id_details);

        FRENewObjectFromUTF8(strlen(_aPINStr) + 1, (const uint8_t*) _aPINStr, &result);
        return result;

    }
    return NULL;
}
FREObject getIMEI(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[])
{
    FREObject result;

    deviceinfo_identifying_details_t *id_details;

    int rc = deviceinfo_get_identifying_details(&id_details);
    if (BPS_SUCCESS == rc) {


        fprintf(stderr, "before deviceinfo_identifying_details_get_imei\n");
        const char* _aIMEIStr = deviceinfo_identifying_details_get_imei(id_details);
        fprintf(stderr, "after deviceinfo_identifying_details_get_imei 2 %s\n", _aIMEIStr);
        deviceinfo_free_identifying_details(&id_details);

        FRENewObjectFromUTF8(strlen(_aIMEIStr) + 1, (const uint8_t*) _aIMEIStr, &result);
        return result;

    }
    return NULL;
}
FREObject getDeviceModelName(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[])
{
    FREObject result;

    deviceinfo_details_t *id_details;

    int rc = deviceinfo_get_details(&id_details);
    if (BPS_SUCCESS == rc) {


        fprintf(stderr, "before deviceinfo_details_get_model_name\n");
        const char* _aIMEIStr = deviceinfo_details_get_model_name(id_details);
        fprintf(stderr, "after deviceinfo_details_get_model_name 2 %s\n", _aIMEIStr);
        deviceinfo_free_details(&id_details);

        FRENewObjectFromUTF8(strlen(_aIMEIStr) + 1, (const uint8_t*) _aIMEIStr, &result);
        return result;

    }
    return NULL;
}

