#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2LoginSessionStates.hpp"
namespace leagueapi {
  struct LolHonorV2LoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LolHonorV2LoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2LoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2LoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolHonorV2LoginSessionStates_t>();
  }
}
