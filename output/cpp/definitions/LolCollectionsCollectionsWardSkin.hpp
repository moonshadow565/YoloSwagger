#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsWardSkin_t {
    std::string description;
    int64_t id;
    std::string name;
    LolCollectionsCollectionsOwnership_t ownership;
    std::string wardImagePath;
    std::string wardShadowImagePath;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkin_t& v) {
    j["description"] = v.description;
    j["id"] = v.id;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["wardImagePath"] = v.wardImagePath;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkin_t& v) {
    v.description = j.at("description").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership_t>();
    v.wardImagePath = j.at("wardImagePath").get<std::string>();
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>();
  }
}
