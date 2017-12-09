#pragma once
#include "../client.hpp"
#include "LolChatGroupResource.hpp"
namespace leagueapi {
  nlohmann::json PostLolChatV1FriendGroups (const ClientInfo& info,
    const LolChatGroupResource_t& group)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(group).dump();
    std::string path = "/lol-chat/v1/friend-groups";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
