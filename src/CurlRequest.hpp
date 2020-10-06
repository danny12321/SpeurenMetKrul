//
// Created by Danny on 5-10-2020.
//

#ifndef SPEURENMETKRUL_CURLREQUEST_HPP
#define SPEURENMETKRUL_CURLREQUEST_HPP

#include <iostream>
#include <string>
#include "curl/curl.h"

class CurlRequest {
private:

public:
    std::string request(const std::string& url);
};


#endif //SPEURENMETKRUL_CURLREQUEST_HPP
