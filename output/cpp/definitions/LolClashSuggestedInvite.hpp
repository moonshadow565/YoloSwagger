#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashSuggestedInvite_t {
    uint64_t suggesterSummonerId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashSuggestedInvite_t& v) {
    j["suggesterSummonerId"] = v.suggesterSummonerId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashSuggestedInvite_t& v) {
    v.suggesterSummonerId = j.at("suggesterSummonerId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
