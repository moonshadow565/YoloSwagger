#pragma once
#include "../client.hpp"
#include "LolMatchHistoryMatchHistoryList.hpp"
namespace leagueapi {
  LolMatchHistoryMatchHistoryList_t GetLolMatchHistoryV1FriendMatchlistsByAccountId (const ClientInfo& info,
    const uint64_t& accountId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-match-history/v1/friend-matchlists/"+UrlCode::encode(to_string(accountId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
