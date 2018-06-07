@interface LSApplicationWorkspace : NSObject {
}

+ (id)defaultWorkspace;
- (bool)openApplicationWithBundleID:(id)arg1;
- (BOOL)uninstallApplication:(NSString *)identifier withOptions:(NSDictionary *)options;
- (BOOL)applicationIsInstalled:(NSString *)appIdentifier;

@end
