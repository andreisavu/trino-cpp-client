#include "client.h"

#include <gtest/gtest.h>

TEST(Client, Connect)
{
    trinodb::Client client;
    client.connect("localhost", "8080");
}
