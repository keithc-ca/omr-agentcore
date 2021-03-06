/*******************************************************************************
 * Copyright 2016 IBM Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/


#ifndef ibmras_common_propertiesfile_h
#define ibmras_common_propertiesfile_h

#include <stdlib.h>
#include <istream>
#include "ibmras/common/Properties.h"

namespace ibmras {
namespace common {

class DECL PropertiesFile: public Properties {
public:
	int load(const std::string &inputFile);

protected:

};
/* end class PropertiesFile */
}
} /* end namespace RASCommon */

#endif /* ibmras_common_propertiesfile_h */
