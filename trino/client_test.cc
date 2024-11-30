#include "client.h"

#include <gtest/gtest.h>

TEST(Client, Connect)
{
    trino::Client client;
    client.connect("localhost", "8080");
}
