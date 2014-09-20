/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString, NSData, NSArray;

@interface DAContactSearchResultElement : NSObject <NSSecureCoding> {
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_workPhone;
    NSString *_mobilePhone;
    NSString *_company;
    NSString *_title;
    NSString *_homePhone;
    NSString *_alias;
    NSString *_office;
    NSString *_serverSource;
    NSString *_recordName;
    NSString *_faxPhone;
    NSString *_department;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    NSString *_country;
    NSData *_jpegPhoto;
    NSString *_imService;
    NSString *_imUsername;
    NSString *_uri;
    NSString *_buildingName;
    NSString *_appleFloor;
    NSString *_pagerNumber;
    NSString *_postalAddress;
    NSString *_homePostalAddress;
    NSString *_principalPath;
    NSString *_preferredUserAddress;
    NSArray *_cuAddresses;
    NSString *_iPhone;
    NSString *_mainPhone;
    NSString *_workFaxPhone;
    NSString *_identifierOnServer;
}

@property(copy) NSString * displayName;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * emailAddress;
@property(copy) NSString * workPhone;
@property(copy) NSString * mobilePhone;
@property(copy) NSString * company;
@property(copy) NSString * title;
@property(copy) NSString * homePhone;
@property(copy) NSString * alias;
@property(copy) NSString * office;
@property(copy) NSString * serverSource;
@property(copy) NSString * recordName;
@property(copy) NSString * faxPhone;
@property(copy) NSString * department;
@property(copy) NSString * street;
@property(copy) NSString * city;
@property(copy) NSString * state;
@property(copy) NSString * zip;
@property(copy) NSString * country;
@property(copy) NSData * jpegPhoto;
@property(copy) NSString * imService;
@property(copy) NSString * imUsername;
@property(copy) NSString * uri;
@property(copy) NSString * buildingName;
@property(copy) NSString * appleFloor;
@property(copy) NSString * pagerNumber;
@property(copy) NSString * postalAddress;
@property(copy) NSString * homePostalAddress;
@property(copy) NSString * principalPath;
@property(copy) NSString * preferredUserAddress;
@property(copy) NSArray * cuAddresses;
@property(copy) NSString * iPhone;
@property(copy) NSString * mainPhone;
@property(copy) NSString * workFaxPhone;
@property(retain) NSString * identifierOnServer;

+ (bool)supportsSecureCoding;

- (id)street;
- (void)setUri:(id)arg1;
- (id)country;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (void)setCountry:(id)arg1;
- (id)uri;
- (void)setStreet:(id)arg1;
- (void)setWorkFaxPhone:(id)arg1;
- (void)setMainPhone:(id)arg1;
- (void)setIPhone:(id)arg1;
- (void)setHomePostalAddress:(id)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setAppleFloor:(id)arg1;
- (void)setBuildingName:(id)arg1;
- (void)setImUsername:(id)arg1;
- (void)setImService:(id)arg1;
- (void)setZip:(id)arg1;
- (void)setFaxPhone:(id)arg1;
- (void)setServerSource:(id)arg1;
- (bool)isEqualToDAContactSearchResultElement:(id)arg1;
- (id)serverSource;
- (id)department;
- (void)setDepartment:(id)arg1;
- (void)setPagerNumber:(id)arg1;
- (void)setIdentifierOnServer:(id)arg1;
- (void)setJpegPhoto:(id)arg1;
- (void)setWorkPhone:(id)arg1;
- (id)office;
- (void)setMobilePhone:(id)arg1;
- (void)setHomePhone:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setOffice:(id)arg1;
- (id)preferredUserAddress;
- (void)setCuAddresses:(id)arg1;
- (id)cuAddresses;
- (void)setPreferredUserAddress:(id)arg1;
- (void)setPrincipalPath:(id)arg1;
- (id)principalPath;
- (id)alias;
- (void)setAlias:(id)arg1;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (id)recordName;
- (void).cxx_destruct;
- (id)displayName;
- (id)title;
- (void)setState:(id)arg1;
- (id)state;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setRecordName:(id)arg1;
- (void)setCity:(id)arg1;
- (id)identifierOnServer;
- (id)appleFloor;
- (id)buildingName;
- (id)imService;
- (id)imUsername;
- (id)jpegPhoto;
- (id)homePostalAddress;
- (id)postalAddress;
- (id)zip;
- (id)city;
- (id)company;
- (id)workFaxPhone;
- (id)mainPhone;
- (id)iPhone;
- (id)pagerNumber;
- (id)faxPhone;
- (id)homePhone;
- (id)mobilePhone;
- (id)workPhone;
- (void*)newAddressBookRecordWithSource:(void*)arg1;

@end