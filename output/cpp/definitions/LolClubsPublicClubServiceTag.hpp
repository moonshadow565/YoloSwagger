#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicClubServiceTag_t {
    std::string name;
    uint64_t summonerId;
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubServiceTag_t& v) {
    j["name"] = v.name;
    j["summonerId"] = v.summonerId;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubServiceTag_t& v) {
    v.name = j.at("name").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.tag = j.at("tag").get<std::string>();
  }
}
