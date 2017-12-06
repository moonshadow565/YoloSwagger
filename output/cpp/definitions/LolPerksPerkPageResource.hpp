#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkPageResource_t {
    int32_t formatVersion;
    int32_t id;
    bool isActive;
    bool isDeletable;
    bool isEditable;
    bool isValid;
    std::string name;
    int32_t order;
    int32_t primaryStyleId;
    std::vector<int32_t> selectedPerkIds;
    int32_t subStyleId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkPageResource_t& v) {
    j["formatVersion"] = v.formatVersion;
    j["id"] = v.id;
    j["isActive"] = v.isActive;
    j["isDeletable"] = v.isDeletable;
    j["isEditable"] = v.isEditable;
    j["isValid"] = v.isValid;
    j["name"] = v.name;
    j["order"] = v.order;
    j["primaryStyleId"] = v.primaryStyleId;
    j["selectedPerkIds"] = v.selectedPerkIds;
    j["subStyleId"] = v.subStyleId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkPageResource_t& v) {
    v.formatVersion = j.at("formatVersion").get<int32_t>();
    v.id = j.at("id").get<int32_t>();
    v.isActive = j.at("isActive").get<bool>();
    v.isDeletable = j.at("isDeletable").get<bool>();
    v.isEditable = j.at("isEditable").get<bool>();
    v.isValid = j.at("isValid").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.order = j.at("order").get<int32_t>();
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>();
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>();
    v.subStyleId = j.at("subStyleId").get<int32_t>();
  }
}
