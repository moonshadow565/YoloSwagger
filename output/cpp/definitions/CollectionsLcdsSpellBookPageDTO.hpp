#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSlotEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsSpellBookPageDTO_t {
    uint32_t_t pageId;
    std::string_t name;
    std::vector<CollectionsLcdsSlotEntry_t> slotEntries;
    uint64_t_t createDate;
    bool_t current;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookPageDTO_t& v) {
    j["pageId"] = v.pageId;
    j["name"] = v.name;
    j["slotEntries"] = v.slotEntries;
    j["createDate"] = v.createDate;
    j["current"] = v.current;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookPageDTO_t& v) {
    v.pageId = j.at("pageId").get<uint32_t_t>();
    v.name = j.at("name").get<std::string_t>();
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry_t>>();
    v.createDate = j.at("createDate").get<uint64_t_t>();
    v.current = j.at("current").get<bool_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsSpellBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
