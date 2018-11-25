#include <Functions/FunctionFactory.h>
#include <Functions/queryStringAndFragment.h>
#include <Functions/FunctionStringToString.h>

namespace DB
{

struct NameCutQueryStringAndFragment { static constexpr auto name = "cutQueryStringAndFragment"; };
using FunctionCutQueryStringAndFragment = FunctionStringToString<CutSubstringImpl<ExtractQueryStringAndFragment<false>>, NameCutQueryStringAndFragment>;

void registerFunctionsCutQueryStringAndFragment(FunctionFactory & factory)
{
    factory.registerFunction<FunctionCutQueryStringAndFragment>();
}

}
