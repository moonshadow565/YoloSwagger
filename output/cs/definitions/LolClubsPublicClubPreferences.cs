using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClubsPublicClubPreferences
    {
        [DataMember(Name = "shareClubAffiliation")]
        bool ShareClubAffiliation { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicClubPreferences {\n");
            sb.Append("  ShareClubAffiliation: ").Append(ShareClubAffiliation).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}