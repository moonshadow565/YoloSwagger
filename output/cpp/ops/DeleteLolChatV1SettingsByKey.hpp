#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json DeleteLolChatV1SettingsByKey (const ClientInfo& info,
    const std::string& key,
    const std::optional<bool>& doAsync = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-chat/v1/settings/"+UrlCode::encode(to_string(key))+"";
    Headers query;
    if({0})
      query["doAsync"] = *doAsync;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
