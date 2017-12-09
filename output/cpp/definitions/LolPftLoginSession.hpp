#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPftLoginSession_t {
    uint64_t summonerId;
    std::string puuid;
    uint64_t accountId;
    LolPftLoginSessionStates_t state;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSession_t& v) {
    j["summonerId"] = v.summonerId;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSession_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolPftLoginSessionStates_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const LolPftLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
