#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyBotChampion_t {
    bool_t active;
    std::vector<LolLobbyLobbyBotDifficulty_t> botDifficulties;
    int32_t_t id;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotChampion_t& v) {
    j["active"] = v.active;
    j["botDifficulties"] = v.botDifficulties;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotChampion_t& v) {
    v.active = j.at("active").get<bool_t>();
    v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty_t>>();
    v.id = j.at("id").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyLobbyBotChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
