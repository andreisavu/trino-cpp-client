#pragma once

#include <string>

namespace trino
{

    class Client
    {
    public:
        Client() = default;
        ~Client() = default;

        void connect(const std::string& host, const std::string& port)
        {
            host_ = host;
            port_ = port;
        }

    private:
        std::string host_;
        std::string port_;
    };

} // namespace trino