#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsTalentEntry_t {
    int32_t rank;
    int32_t talentId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsTalentEntry_t& v) {
    j["rank"] = v.rank;
    j["talentId"] = v.talentId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsTalentEntry_t& v) {
    v.rank = j.at("rank").get<int32_t>();
    v.talentId = j.at("talentId").get<int32_t>();
  }
}
