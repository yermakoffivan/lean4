/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "runtime/hash.h"
#include "runtime/rapidhash.h"

namespace lean {

uint64 hash_str(size_t len, unsigned char const * str, uint64 init_value) {
    return rapidhash_withSeed(str, len, init_value);
}

}
