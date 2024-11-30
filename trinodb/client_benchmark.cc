#include "client.h"

#include <benchmark/benchmark.h>

static void BM_Client(benchmark::State &state)
{
    for (auto _ : state)
    {
        trinodb::Client client;
        client.connect("localhost", "8080");
    }
}

BENCHMARK(BM_Client);

BENCHMARK_MAIN();
