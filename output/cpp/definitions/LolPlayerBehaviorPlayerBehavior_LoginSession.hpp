#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp"
#include "LolPlayerBehaviorPlayerBehavior_LoginError.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorPlayerBehavior_LoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    std::optional<LolPlayerBehaviorPlayerBehavior_LoginError_t> error;
    LolPlayerBehaviorPlayerBehavior_LoginSessionState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    if(v.error)
      j["error"] = *v.error;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<LolPlayerBehaviorPlayerBehavior_LoginError_t>();
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorPlayerBehavior_LoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
