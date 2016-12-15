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
 * game.h
 *
 *  Created on: Oct 13, 2012
 *      Author: caneraltinbasak
 */
#include "FlashRuntimeExtensions.h"
#ifndef GAME_H_
#define GAME_H_

FREObject getCurrentSSID(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);
FREObject getCurrentMACAddress(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);
FREObject getCurrentDeviceName(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);
FREObject getPIN(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);
FREObject getIMEI(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);
FREObject getDeviceModelName(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]);

#endif /* GAME_H_ */
