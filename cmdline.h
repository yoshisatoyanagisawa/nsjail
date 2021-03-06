/*

   nsjail - cmdline parsing
   -----------------------------------------

   Copyright 2014 Google Inc. All Rights Reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#ifndef NS_CMDLINE_H
#define NS_CMDLINE_H

#include <sys/resource.h>
#include <sys/time.h>

#include "common.h"

__rlim64_t cmdlineParseRLimit(int res, const char *optarg, unsigned long mul);
void cmdlineLogParams(struct nsjconf_t *nsjconf);
bool cmdlineParse(int argc, char *argv[], struct nsjconf_t *nsjconf);

#endif				/* _CMDLINE_H */
