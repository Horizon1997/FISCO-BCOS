/**
 * @CopyRight:
 * FISCO-BCOS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FISCO-BCOS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with FISCO-BCOS.  If not, see <http://www.gnu.org/licenses/>
 * (c) 2016-2018 fisco-dev contributors.
 *
 * @brief
 *
 * @file SHA3.cpp
 * @author: jimmyshi
 * @date 2018-08-27
 */


#include <libdevcore/SHA3.h>
#include <test/tools/libtestutils/TestOutputHelper.h>
#include <boost/test/unit_test.hpp>
#include <cstdio>
#include <string>
#include <vector>

using namespace dev;
namespace dev
{
namespace test
{
BOOST_FIXTURE_TEST_SUITE(SHA3, TestOutputHelperFixture)
/// test micro "asserts"
BOOST_AUTO_TEST_CASE(SHA3)
{
    std::string ts = EmptySHA3.hex();
    BOOST_CHECK_EQUAL(
        ts, std::string("c5d2460186f7233c927e7db2dcc703c0e500b653ca82273b7bfad8045d85a470"));

    ts = EmptyListSHA3.hex();
    BOOST_CHECK_EQUAL(
        ts, std::string("1dcc4de8dec75d7aab85b567b6ccd41ad312451b948a7413f0a142fd40d49347"));

    ts = sha3("abcde").hex();
    BOOST_CHECK_EQUAL(
        ts, std::string("6377c7e66081cb65e473c1b95db5195a27d04a7108b468890224bedbe1a8a6eb"));
}

BOOST_AUTO_TEST_SUITE_END()
}  // namespace test
}  // namespace dev
