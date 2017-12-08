#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicClubTag_t {
    std::string_t clubTag;
    std::string_t clubName;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubTag_t& v) {
    j["clubTag"] = v.clubTag;
    j["clubName"] = v.clubName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubTag_t& v) {
    v.clubTag = j.at("clubTag").get<std::string_t>();
    v.clubName = j.at("clubName").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolClubsPublicClubTag_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
