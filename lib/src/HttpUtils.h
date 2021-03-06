/**
 *
 *  HttpUtils.h
 *  An Tao
 *  
 *  Copyright 2018, An Tao.  All rights reserved.
 *  https://github.com/an-tao/drogon
 *  Use of this source code is governed by a MIT license
 *  that can be found in the License file.
 *
 *  Drogon
 *
 */

#pragma once
#include <string>
#include <drogon/HttpTypes.h>

namespace drogon
{

std::string webContentTypeToString(ContentType contenttype);
std::string webContentTypeAndCharsetToString(ContentType contenttype, const std::string &charSet);

} // namespace drogon
