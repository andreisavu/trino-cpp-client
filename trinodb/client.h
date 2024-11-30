#pragma once

#include <string>

namespace trinodb
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

} // namespace trinodb