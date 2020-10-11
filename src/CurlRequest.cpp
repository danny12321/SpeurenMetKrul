//
// Created by Danny on 5-10-2020.
//

#include "CurlRequest.hpp"

static size_t CurlWrite_CallbackFunc_StdString(void *contents, size_t size, size_t nmemb, std::string *s) {
    size_t newLength = size*nmemb;
    try
    {
        s->append((char*)contents, newLength);
    }
    catch(std::bad_alloc &e)
    {
        //handle memory problem
        return 0;
    }
    return newLength;
}

std::string CurlRequest::request(const std::string& url) {
    curl_global_init(CURL_GLOBAL_DEFAULT);
    CURL* curl = curl_easy_init();

    CURLcode res;
    std::string result;

    if(curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L); //only for https
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L); //only for https
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CurlWrite_CallbackFunc_StdString);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);

        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        /* Check for errors */
        if(res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));
        }

        /* always cleanup */
        curl_easy_cleanup(curl);
    }

    return result;
}

std::vector<std::string> CurlRequest::GetInstructions(std::string url) {
    std::vector<std::string> instructions;
    auto res = request(url);

    auto ss = std::stringstream{res};
    for (std::string line; std::getline(ss, line, '\n');) {
        instructions.push_back(line);
    }

    return instructions;
}

std::vector<std::string> CurlRequest::Test() {
    std::vector<std::string> instructions;
    auto res = ">main\n"
               "gto\n"
               ":gcd\n"
               "=v\n"
               "=u\n"
               "$u\n"
               "$v\n"
               ">gcd-loop\n"
               "gge\n"
               "$u\n"
               "=t\n"
               "$v\n"
               "=u\n"
               "$t\n"
               "=v\n"
               ":gcd-loop\n"
               "$v\n"
               "0\n"
               ">gcd-ret\n"
               "gle\n"
               "$v\n"
               "=t\n"
               "$u\n"
               "$v\n"
               "mod\n"
               "=v\n"
               "$t\n"
               "=u\n"
               ">gcd-loop\n"
               "gto\n"
               ":gcd-ret\n"
               "$u\n"
               "ret\n"
               ":lcm\n"
               "=b\n"
               "=a\n"
               "$a\n"
               "$a\n"
               "$b\n"
               ">gcd\n"
               "fun\n"
               "div\n"
               "$b\n"
               "mul\n"
               "ret\n"
               ":main\n"
               "214\n"
               "68\n"
               ">lcm\n"
               "fun\n"
               "\\-\n"
               "cat\n"
               "765\n"
               "27\n"
               ">gcd\n"
               "fun\n"
               "cat\n"
               "\\-\n"
               "cat\n"
               "56\n"
               "78\n"
               ">lcm\n"
               "fun\n"
               "cat\n"
               "rev\n"
               "\\.txt\n"
               "cat";

    auto ss = std::stringstream{res};
    for (std::string line; std::getline(ss, line, '\n');) {
        instructions.push_back(line);
    }

    return instructions;
}