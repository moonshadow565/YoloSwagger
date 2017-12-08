#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsPlayerNotification_t {
    std::string_t detailKey;
    std::string_t source;
    std::string_t type;
    std::string_t state;
    std::string_t iconUrl;
    std::string_t backgroundUrl;
    bool_t critical;
    std::string_t titleKey;
    std::map<std::string, std::string> data;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsPlayerNotification_t& v) {
    j["detailKey"] = v.detailKey;
    j["source"] = v.source;
    j["type"] = v.type;
    j["state"] = v.state;
    j["iconUrl"] = v.iconUrl;
    j["backgroundUrl"] = v.backgroundUrl;
    j["critical"] = v.critical;
    j["titleKey"] = v.titleKey;
    j["data"] = v.data;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsPlayerNotification_t& v) {
    v.detailKey = j.at("detailKey").get<std::string_t>();
    v.source = j.at("source").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.state = j.at("state").get<std::string_t>();
    v.iconUrl = j.at("iconUrl").get<std::string_t>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string_t>();
    v.critical = j.at("critical").get<bool_t>();
    v.titleKey = j.at("titleKey").get<std::string_t>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const LolCollectionsPlayerNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
