#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json DeleteLolCollectionsV1InventoriesBySummonerIdMasteryBookPagesByPageId (const ClientInfo& info,
    const uint64_t& summonerId,
    const uint32_t& pageId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-collections/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/mastery-book/pages/"+UrlCode::encode(to_string(pageId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
