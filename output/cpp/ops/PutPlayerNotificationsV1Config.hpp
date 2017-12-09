#pragma once
#include "../client.hpp"
#include "PlayerNotificationConfigResource.hpp"
namespace leagueapi {
  PlayerNotificationConfigResource_t PutPlayerNotificationsV1Config (const ClientInfo& info,
    const PlayerNotificationConfigResource_t& config)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(config).dump();
    std::string path = "/player-notifications/v1/config";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
