// Copyright (c) 2019 The BitcoinCore developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BARICOIN_NET_TYPES_H
#define BARICOIN_NET_TYPES_H

#include <map>

class CBanEntry;
class CSubNet;

using banmap_t = std::map<CSubNet, CBanEntry>;

#endif // BARICOIN_NET_TYPES_H
