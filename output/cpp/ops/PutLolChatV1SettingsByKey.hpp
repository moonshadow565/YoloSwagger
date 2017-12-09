#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json PutLolChatV1SettingsByKey (const ClientInfo& info,
    const std::string& key,
    const nlohmann::json& value,
    const std::optional<bool>& doAsync = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(value).dump();
    std::string path = "/lol-chat/v1/settings/"+UrlCode::encode(to_string(key))+"";
    Headers query;
    if({0})
      query["doAsync"] = *doAsync;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
