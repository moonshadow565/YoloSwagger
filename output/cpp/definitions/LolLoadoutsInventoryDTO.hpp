#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsInventoryDTO_t {
    std::string_t expires;
    std::map<std::string, nlohmann::json> items;
    std::optional<std::string_t> itemsJwt;
    std::string_t puuid;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryDTO_t& v) {
    j["expires"] = v.expires;
    j["items"] = v.items;
    if(v.itemsJwt)
      j["itemsJwt"] = *v.itemsJwt;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryDTO_t& v) {
    v.expires = j.at("expires").get<std::string_t>();
    v.items = j.at("items").get<std::map<std::string, nlohmann::json>>();
    if(auto it = j.find("itemsJwt"); it != j.end() && !it->is_null())
      v.itemsJwt = it->get<std::string_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLoadoutsInventoryDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
