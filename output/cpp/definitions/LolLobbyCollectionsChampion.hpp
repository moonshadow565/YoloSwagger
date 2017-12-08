#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyCollectionsChampion_t {
    bool active;
    bool botEnabled;
    int32_t id;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyCollectionsChampion_t& v) {
    j["active"] = v.active;
    j["botEnabled"] = v.botEnabled;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyCollectionsChampion_t& v) {
    v.active = j.at("active").get<bool>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolLobbyCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
