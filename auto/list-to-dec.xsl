<?xml version="1.0"?>

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:output method="text"/>

<xsl:template match="tokens">
<xsl:apply-templates select="item"/>
</xsl:template>

<xsl:template match="item">  T_<xsl:value-of select="@id"/>, 
</xsl:template>

</xsl:stylesheet>

