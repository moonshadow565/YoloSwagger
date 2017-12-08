#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMapsMaps_t {
    nlohmann::json_t properties;
    bool_t isRGM;
    std::map<std::string, std::string> assets;
    std::string_t platformId;
    std::string_t platformName;
    std::string_t description;
    std::string_t gameMode;
    std::string_t name;
    std::string_t gameMutator;
    std::string_t gameModeName;
    std::string_t gameModeDescription;
    int64_t_t id;
    bool_t isDefault;
    std::string_t gameModeShortName;
  };

  inline void to_json(nlohmann::json& j, const LolMapsMaps_t& v) {
    j["properties"] = v.properties;
    j["isRGM"] = v.isRGM;
    j["assets"] = v.assets;
    j["platformId"] = v.platformId;
    j["platformName"] = v.platformName;
    j["description"] = v.description;
    j["gameMode"] = v.gameMode;
    j["name"] = v.name;
    j["gameMutator"] = v.gameMutator;
    j["gameModeName"] = v.gameModeName;
    j["gameModeDescription"] = v.gameModeDescription;
    j["id"] = v.id;
    j["isDefault"] = v.isDefault;
    j["gameModeShortName"] = v.gameModeShortName;
  }

  inline void from_json(const nlohmann::json& j, LolMapsMaps_t& v) {
    v.properties = j.at("properties").get<nlohmann::json_t>();
    v.isRGM = j.at("isRGM").get<bool_t>();
    v.assets = j.at("assets").get<std::map<std::string, std::string>>();
    v.platformId = j.at("platformId").get<std::string_t>();
    v.platformName = j.at("platformName").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.gameMutator = j.at("gameMutator").get<std::string_t>();
    v.gameModeName = j.at("gameModeName").get<std::string_t>();
    v.gameModeDescription = j.at("gameModeDescription").get<std::string_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.isDefault = j.at("isDefault").get<bool_t>();
    v.gameModeShortName = j.at("gameModeShortName").get<std::string_t>();
  }
  inline std::string to_string(const LolMapsMaps_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
